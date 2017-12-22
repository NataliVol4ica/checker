
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tools/tools.h"

void	skip_trash(t_line *tests)
{
	if (tests->str[0] != '=')
	do
		read_line(tests);
	while (tests->len > -1 && (tests->str[0] == '#' || tests->str[0] == '\0'));
	if (tests->str[0] != '=')
		bad_file();
	do
		read_line(tests);
	while (tests->len > -1 && (tests->str[0] == '#' || tests->str[0] == '\0'));
}

void	print_template(t_line *mkfile)
{
	fprintf(mkfile->fd, "\n#[n$] [flags] [width] [precision] [lengthes] [types]");
	fprintf(mkfile->fd, "\n#[args] [code piece] [do print something extra(for %%n)]\n");
}

void	print_list_to_makefile(size_t *n, t_line *mkfile, t_list *list, char *testtypes)
{
	*n = 0;
	
	fprintf(mkfile->fd, "\n# %s TESTS\n\n", testtypes);
	while (list)
	{
		fprintf(mkfile->fd, "TEST_%c%02zu = ", testtypes[0], *n);
		fprintf(mkfile->fd, "\"test_%c%02zu\" %s\n", testtypes[0] - 'A' + 'a', *n, list->str);
		list = list->next;
		*n = *n + 1;
	}
}

void	print_test_vars(t_line *mkfile, t_list **main_test_list, t_list **bonus_test_list,
						size_t *num_of_main_tests, size_t *num_of_bonus_tests)
{
	t_line	*tests;

	tests = new_readline("./tests", "r");
	skip_trash(tests);
	while (tests->len > 0 && tests->str[0] != '=')
	{	
		if (tests->str[0] == '\"')
			lst_push_back(main_test_list, lst_new(tests->str));
		read_line(tests);
	}
	print_list_to_makefile(num_of_main_tests, mkfile, *main_test_list, "MAIN");
	skip_trash(tests);
	while (tests->len > 0 && tests->str[0] != '=')
	{	
		if (tests->str[0] == '\"')
			lst_push_back(bonus_test_list, lst_new(tests->str));
		read_line(tests);
	}
	print_list_to_makefile(num_of_bonus_tests, mkfile, *bonus_test_list, "BONUS");
	close_readline(tests);
}

int		main()
{
	
	t_line	*mkfile;
	t_list	*main_test_list;
	t_list	*bonus_test_list;
	size_t	num_of_main_tests;
	size_t	num_of_bonus_tests;

	mkfile = new_readline("./testers/Makefile", "w");
	print_template(mkfile);
	main_test_list = NULL;
	bonus_test_list = NULL;
	print_test_vars(mkfile, &main_test_list, &bonus_test_list, &num_of_main_tests, &num_of_bonus_tests);
	fprintf(mkfile->fd, "TEST_NAMES =");
	for (size_t i = 0; i < num_of_main_tests; i++)
		fprintf(mkfile->fd, " test_m%02zu", i);
	for (size_t i = 0; i < num_of_bonus_tests; i++)
		fprintf(mkfile->fd, " test_b%02zu", i);

	fprintf(mkfile->fd, "\n\nTEST_EXE = $(patsubst %%, ../executables/testers/%%, $(TEST_NAMES))");
	//fprintf(mkfile->fd, "\nTEST_C = $(patsubst %%, ../testers/%%, $(TEST_NAMES))");
	fprintf(mkfile->fd, "\n\n# COLORS\n\nGREEN = \'\\033[0;32m\'\n");
	fprintf(mkfile->fd, "PURPLE = \'\\033[0;35m\'\nCYAN = \'\\033[0;36m\'\nNC = \'\\033[0m\'");

	fprintf(mkfile->fd, "\n\ncreate_testers:\n");
	for (size_t i = 0; i < num_of_main_tests; i++)
		fprintf(mkfile->fd, "\t@../executables/testmaker $(TEST_M%02zu) && printf \".\"\n", i);
	for (size_t i = 0; i < num_of_bonus_tests; i++)
		fprintf(mkfile->fd, "\t@../executables/testmaker $(TEST_B%02zu) && printf \".\"\n", i);
	fprintf(mkfile->fd, "\t@printf \"\\n\"\n");

	fprintf(mkfile->fd, "\n../executables/testers/%%: ../testers/%%.c\n");
	fprintf(mkfile->fd, "\t@gcc -w -o $@ $< -I.. -L.. -lftprintf\n");
	fprintf(mkfile->fd, "\t@printf \".\"\n");

	fprintf(mkfile->fd, "\ncompiler: $(TEST_EXE)\n");

	fprintf(mkfile->fd, "\ncompile_testers:\n");
	fprintf(mkfile->fd, "\t@echo ${CYAN}\"[Compiling testers]\"${NC}\n");
	fprintf(mkfile->fd, "\t@make compiler\n");
	fprintf(mkfile->fd, "\t@printf \"\\n\"\n");

	fprintf(mkfile->fd, "\nrun_testers:\n");
	fprintf(mkfile->fd, "\t@echo ${PURPLE}\"[Running testers]\"${NC}\n");
	for (size_t i = 0; i < num_of_main_tests; i++)
		fprintf(mkfile->fd, "\t@../executables/testers/test_m%02zu > ../files/test_m%02zu_ft_printf_print && printf \".\" || printf \"x\"\n", i, i);
	for (size_t i = 0; i < num_of_bonus_tests; i++)
		fprintf(mkfile->fd, "\t@../executables/testers/test_b%02zu > ../files/test_m%02zu_ft_printf_print && printf \".\" || printf \"x\"\n", i, i);
	fprintf(mkfile->fd, "\t@printf \"\\n\"\n");

	fprintf(mkfile->fd, "\ndiff:\n");
	fprintf(mkfile->fd, "\t../executables/differ $(TEST_NAMES)");
	fprintf(mkfile->fd, "\n");
	close_readline(mkfile);
	return (0);
}