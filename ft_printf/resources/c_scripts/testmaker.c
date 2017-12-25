
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <libc.h>
#include "tools.h"

#define TESTPATH "../generated_testers/"

void	set_flags(t_test *t, size_t num)
{
	size_t i;

	for (i = 0; i < t->numof_flags; i++)
		t->flagmass[i] = 0;
	i = 0;
	while (num > 0)
	{
		t->flagmass[i++] = num % 2;
		num /= 2;
	}
}

void	print_flags(t_test *t)
{
	for (size_t i = 0; i < t->numof_flags; i++)
		if (t->flagmass[i])
			fprintf(t->fd, "%c", t->flags[i]);
}

void	print_test(t_test *t)
{
	fprintf(t->fd, "//@\n");
	fprintf(t->fd, "\tft_printf(\"\\n#%04zu\");\n", t->testnum);
	fprintf(t->fd, "\tfprintf(printf_, \"\\n#%04zu\");\n", t->testnum);
	fprintf(t->fd, "\tret1 = fprintf(printf_, \"|%%%s", t->n);
	print_flags(t);
	fprintf(t->fd, "%s%s", t->width, t->precision);
	if (t->length) fprintf(t->fd, "%s", t->length);
	fprintf(t->fd, "%c|%s\"", t->type, t->extra_print);
	if (t->args[0] != '\0') fprintf(t->fd, ", %s", t->args);
	fprintf(t->fd, ");\n");
	fprintf(t->fd, "\tret2 = ft_printf(\"|%%%s", t->n);
	print_flags(t);
	fprintf(t->fd, "%s%s", t->width, t->precision);
	if (t->length) fprintf(t->fd, "%s", t->length);
	fprintf(t->fd, "%c|%s\"", t->type, t->extra_print);
	if (t->args[0] != '\0') fprintf(t->fd, ", %s", t->args);
	fprintf(t->fd, ");\n");
	fprintf(t->fd, "\tfprintf(printf_ret, \"%%d\\n\", ret1);\n");
	fprintf(t->fd, "\tfprintf(ft_printf_ret, \"%%d\\n\", ret2);\n");
	fprintf(t->fd, "\tif (ret1 == -1) printf_ = fopen(\"../testing_results/%s_printf_print\", \"a\");\n", t->name);
}

void	print_tests(t_test *t)
{
	for (size_t flags = 0; flags < t->numof_flagcombinations; flags++)
	{
		set_flags(t, flags);
		for (size_t type = 0; type < t->numof_types; type++)
		{
			t->type = t->types[type];
			for (size_t length = 0; length < t->numof_lengthes; length++)
			{
				t->length = t->lengthes[length];
				t->length = t->length[0] == '-' ? '\0' : t->length;
				print_test(t);
				t->testnum++;
			}
		}
	}
}

void	print_main(t_test *t)
{
	fprintf(t->fd, "int\t\tmain(void)\n");
	fprintf(t->fd, "{\n");
	fprintf(t->fd, "\tFILE\t*printf_, *printf_ret, *ft_printf_ret;\n");
	fprintf(t->fd, "\tint\t\tret1, ret2;\n");
	fprintf(t->fd, "\n");

	fprintf(t->fd, "\t%s\n", t->extra_code);
	fprintf(t->fd, "\tprintf_ = fopen(\"../testing_results/%s_printf_print\", \"w\");\n", t->name);
	fprintf(t->fd, "\tprintf_ret = fopen(\"../testing_results/%s_printf_ret\", \"w\");\n", t->name);
	fprintf(t->fd, "\tft_printf_ret = fopen(\"../testing_results/%s_ft_printf_ret\", \"w\");\n", t->name);
	fprintf(t->fd, "\tsetvbuf(printf_, NULL, _IONBF, 0);\n");
	fprintf(t->fd, "\tsetvbuf(printf_ret, NULL, _IONBF, 0);\n");
	fprintf(t->fd, "\tsetvbuf(ft_printf_ret, NULL, _IONBF, 0);\n");
	fprintf(t->fd, "\n");

	print_tests(t);
	fprintf(t->fd, "\tfclose(printf_);\n");
	fprintf(t->fd, "\tfclose(printf_ret);\n");
	fprintf(t->fd, "\tfclose(ft_printf_ret);\n");
	fprintf(t->fd, "\treturn (0);\n");
	fprintf(t->fd, "}\n\n");
}

void	print_includes(t_test *t)
{
	fprintf(t->fd, "#include <stdio.h>\n");
	fprintf(t->fd, "#include <stdint.h>\n");
	fprintf(t->fd, "#include <locale.h>\n");
	fprintf(t->fd, "#include \"libftprintf.h\"\n\n");
}

void	set_param(char **ptr, char *av, size_t *len)
{
	if (av[0] == '\0' || (av[0] == '-' && av[1] == '\0'))
		*ptr = ft_strnew(0);
	else
		*ptr = av;
	if (len)
		*len = strlen(*ptr);
}

t_test *set_test(char **av)
{
	t_test	*t;

	if (!(t = (t_test*)malloc(sizeof(t_test)))) bad_malloc();
	t->name = av[0];
	t->fd = fopen(ft_strjoin(ft_strjoin(TESTPATH, av[0]), ".c"), "w");
	set_param(&t->n, av[1], NULL);
	set_param(&t->flags, av[2], &t->numof_flags);
	t->numof_flagcombinations = 1;
	for (size_t i = 0; i < t->numof_flags; i++)
		t->numof_flagcombinations *= 2;
	set_param(&t->width, av[3], NULL);
	set_param(&t->precision, av[4], NULL);
	t->lengthes = ft_strsplit(av[5], &t->numof_lengthes, '|');
	set_param(&t->types, av[6], &t->numof_types);
	set_param(&t->args, av[7], NULL);
	set_param(&t->extra_code, av[8], NULL);
	set_param(&t->extra_print, av[9], NULL);
	t->testnum = 0;
	return (t);
}

int		main(int ac, char **av)
{
	t_test	*t;

	if (ac != 11)
		return (1);
	t = set_test(&av[1]);
	print_includes(t);
	print_main(t);
	fclose(t->fd);
	return (0);
}