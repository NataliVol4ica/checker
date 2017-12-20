#include <stdio.h>
#include <stdint.h>
#include <locale.h>
#include <wchar.h>
#include "libftprintf.h"

size_t testing_bdbobu_tests = 336;

void		testing_bdbobu(int width, int precision, intmax_t var)
{
	int		ret1;
	int		ret2;
	char	*loc;
	FILE	*fppres, *fppret, *fpftret;

	loc = setlocale(LC_CTYPE, NULL);
	setlocale(LC_CTYPE, "");

	fppres = fopen("./files/main_printf_res", "a");
	fppret = fopen("./files/main_printf_ret", "a");
	fpftret = fopen("./files/main_ft_printf_ret", "a");

	setvbuf(fppres, NULL, _IONBF, 0);
	setvbuf(fppret, NULL, _IONBF, 0);
	setvbuf(fpftret, NULL, _IONBF, 0);

	fprintf(fppres, "===\\ NEW TEST\n");
	fprintf(fppres, "NAME = testing_bdbobu.c\n");
	fprintf(fppres, "TESTS = %zu\n", testing_bdbobu_tests);
	fprintf(fppres, "WIDTH = %d\n", width);
	fprintf(fppres, "PRECISION = %d\n", precision);
	fprintf(fppres, "VAR = %zd\n", var);
	fprintf(fppres, "LOCALE = \"%s\"\n\n", loc);

	ft_printf("===\\ NEW TEST\n");
	ft_printf("NAME = testing_bdbobu.c\n");
	ft_printf("TESTS = %zu\n", testing_bdbobu_tests);
	ft_printf("WIDTH = %d\n", width);
	ft_printf("PRECISION = %d\n", precision);
	ft_printf("VAR = %zd\n", var);
	ft_printf("LOCALE = \"%s\"\n\n", loc);

	setlocale(LC_CTYPE, loc);
	//@
	fprintf(fppres, "#0000");
	ret1 = fprintf(fppres, "|%*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0000") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0001");
	ret1 = fprintf(fppres, "|%*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0001") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0002");
	ret1 = fprintf(fppres, "|%*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0002") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0003");
	ret1 = fprintf(fppres, "|%*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0003") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0004");
	ret1 = fprintf(fppres, "|%*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0004") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0005");
	ret1 = fprintf(fppres, "|%*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0005") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0006");
	ret1 = fprintf(fppres, "|%*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0006") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0007");
	ret1 = fprintf(fppres, "|%*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0007") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0008");
	ret1 = fprintf(fppres, "|%*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0008") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0009");
	ret1 = fprintf(fppres, "|%*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0009") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0010");
	ret1 = fprintf(fppres, "|%*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0010") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0011");
	ret1 = fprintf(fppres, "|%*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0011") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0012");
	ret1 = fprintf(fppres, "|%*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0012") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0013");
	ret1 = fprintf(fppres, "|%*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0013") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0014");
	ret1 = fprintf(fppres, "|%*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0014") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0015");
	ret1 = fprintf(fppres, "|%*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0015") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0016");
	ret1 = fprintf(fppres, "|%*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0016") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0017");
	ret1 = fprintf(fppres, "|%*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0017") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0018");
	ret1 = fprintf(fppres, "|%*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0018") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0019");
	ret1 = fprintf(fppres, "|%*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0019") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0020");
	ret1 = fprintf(fppres, "|%*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0020") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0021");
	ret1 = fprintf(fppres, "|%0*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0021") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0022");
	ret1 = fprintf(fppres, "|%0*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0022") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0023");
	ret1 = fprintf(fppres, "|%0*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0023") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0024");
	ret1 = fprintf(fppres, "|%0*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0024") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0025");
	ret1 = fprintf(fppres, "|%0*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0025") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0026");
	ret1 = fprintf(fppres, "|%0*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0026") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0027");
	ret1 = fprintf(fppres, "|%0*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0027") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0028");
	ret1 = fprintf(fppres, "|%0*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0028") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0029");
	ret1 = fprintf(fppres, "|%0*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0029") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0030");
	ret1 = fprintf(fppres, "|%0*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0030") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0031");
	ret1 = fprintf(fppres, "|%0*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0031") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0032");
	ret1 = fprintf(fppres, "|%0*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0032") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0033");
	ret1 = fprintf(fppres, "|%0*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0033") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0034");
	ret1 = fprintf(fppres, "|%0*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0034") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0035");
	ret1 = fprintf(fppres, "|%0*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0035") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0036");
	ret1 = fprintf(fppres, "|%0*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0036") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0037");
	ret1 = fprintf(fppres, "|%0*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0037") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0038");
	ret1 = fprintf(fppres, "|%0*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0038") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0039");
	ret1 = fprintf(fppres, "|%0*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0039") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0040");
	ret1 = fprintf(fppres, "|%0*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0040") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0041");
	ret1 = fprintf(fppres, "|%0*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0041") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0042");
	ret1 = fprintf(fppres, "|%+*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0042") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0043");
	ret1 = fprintf(fppres, "|%+*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0043") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0044");
	ret1 = fprintf(fppres, "|%+*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0044") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0045");
	ret1 = fprintf(fppres, "|%+*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0045") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0046");
	ret1 = fprintf(fppres, "|%+*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0046") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0047");
	ret1 = fprintf(fppres, "|%+*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0047") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0048");
	ret1 = fprintf(fppres, "|%+*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0048") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0049");
	ret1 = fprintf(fppres, "|%+*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0049") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0050");
	ret1 = fprintf(fppres, "|%+*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0050") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0051");
	ret1 = fprintf(fppres, "|%+*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0051") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0052");
	ret1 = fprintf(fppres, "|%+*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0052") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0053");
	ret1 = fprintf(fppres, "|%+*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0053") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0054");
	ret1 = fprintf(fppres, "|%+*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0054") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0055");
	ret1 = fprintf(fppres, "|%+*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0055") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0056");
	ret1 = fprintf(fppres, "|%+*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0056") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0057");
	ret1 = fprintf(fppres, "|%+*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0057") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0058");
	ret1 = fprintf(fppres, "|%+*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0058") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0059");
	ret1 = fprintf(fppres, "|%+*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0059") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0060");
	ret1 = fprintf(fppres, "|%+*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0060") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0061");
	ret1 = fprintf(fppres, "|%+*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0061") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0062");
	ret1 = fprintf(fppres, "|%+*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0062") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0063");
	ret1 = fprintf(fppres, "|%0+*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0063") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0064");
	ret1 = fprintf(fppres, "|%0+*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0064") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0065");
	ret1 = fprintf(fppres, "|%0+*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0065") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0066");
	ret1 = fprintf(fppres, "|%0+*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0066") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0067");
	ret1 = fprintf(fppres, "|%0+*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0067") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0068");
	ret1 = fprintf(fppres, "|%0+*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0068") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0069");
	ret1 = fprintf(fppres, "|%0+*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0069") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0070");
	ret1 = fprintf(fppres, "|%0+*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0070") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0071");
	ret1 = fprintf(fppres, "|%0+*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0071") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0072");
	ret1 = fprintf(fppres, "|%0+*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0072") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0073");
	ret1 = fprintf(fppres, "|%0+*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0073") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0074");
	ret1 = fprintf(fppres, "|%0+*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0074") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0075");
	ret1 = fprintf(fppres, "|%0+*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0075") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0076");
	ret1 = fprintf(fppres, "|%0+*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0076") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0077");
	ret1 = fprintf(fppres, "|%0+*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0077") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0078");
	ret1 = fprintf(fppres, "|%0+*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0078") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0079");
	ret1 = fprintf(fppres, "|%0+*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0079") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0080");
	ret1 = fprintf(fppres, "|%0+*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0080") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0081");
	ret1 = fprintf(fppres, "|%0+*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0081") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0082");
	ret1 = fprintf(fppres, "|%0+*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0082") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0083");
	ret1 = fprintf(fppres, "|%0+*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0083") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0084");
	ret1 = fprintf(fppres, "|%-*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0084") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0085");
	ret1 = fprintf(fppres, "|%-*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0085") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0086");
	ret1 = fprintf(fppres, "|%-*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0086") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0087");
	ret1 = fprintf(fppres, "|%-*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0087") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0088");
	ret1 = fprintf(fppres, "|%-*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0088") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0089");
	ret1 = fprintf(fppres, "|%-*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0089") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0090");
	ret1 = fprintf(fppres, "|%-*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0090") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0091");
	ret1 = fprintf(fppres, "|%-*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0091") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0092");
	ret1 = fprintf(fppres, "|%-*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0092") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0093");
	ret1 = fprintf(fppres, "|%-*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0093") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0094");
	ret1 = fprintf(fppres, "|%-*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0094") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0095");
	ret1 = fprintf(fppres, "|%-*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0095") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0096");
	ret1 = fprintf(fppres, "|%-*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0096") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0097");
	ret1 = fprintf(fppres, "|%-*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0097") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0098");
	ret1 = fprintf(fppres, "|%-*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0098") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0099");
	ret1 = fprintf(fppres, "|%-*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0099") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0100");
	ret1 = fprintf(fppres, "|%-*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0100") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0101");
	ret1 = fprintf(fppres, "|%-*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0101") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0102");
	ret1 = fprintf(fppres, "|%-*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0102") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0103");
	ret1 = fprintf(fppres, "|%-*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0103") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0104");
	ret1 = fprintf(fppres, "|%-*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0104") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0105");
	ret1 = fprintf(fppres, "|%0-*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0105") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0106");
	ret1 = fprintf(fppres, "|%0-*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0106") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0107");
	ret1 = fprintf(fppres, "|%0-*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0107") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0108");
	ret1 = fprintf(fppres, "|%0-*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0108") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0109");
	ret1 = fprintf(fppres, "|%0-*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0109") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0110");
	ret1 = fprintf(fppres, "|%0-*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0110") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0111");
	ret1 = fprintf(fppres, "|%0-*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0111") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0112");
	ret1 = fprintf(fppres, "|%0-*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0112") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0113");
	ret1 = fprintf(fppres, "|%0-*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0113") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0114");
	ret1 = fprintf(fppres, "|%0-*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0114") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0115");
	ret1 = fprintf(fppres, "|%0-*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0115") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0116");
	ret1 = fprintf(fppres, "|%0-*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0116") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0117");
	ret1 = fprintf(fppres, "|%0-*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0117") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0118");
	ret1 = fprintf(fppres, "|%0-*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0118") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0119");
	ret1 = fprintf(fppres, "|%0-*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0119") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0120");
	ret1 = fprintf(fppres, "|%0-*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0120") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0121");
	ret1 = fprintf(fppres, "|%0-*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0121") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0122");
	ret1 = fprintf(fppres, "|%0-*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0122") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0123");
	ret1 = fprintf(fppres, "|%0-*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0123") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0124");
	ret1 = fprintf(fppres, "|%0-*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0124") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0125");
	ret1 = fprintf(fppres, "|%0-*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0125") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0126");
	ret1 = fprintf(fppres, "|%+-*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0126") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0127");
	ret1 = fprintf(fppres, "|%+-*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0127") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0128");
	ret1 = fprintf(fppres, "|%+-*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0128") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0129");
	ret1 = fprintf(fppres, "|%+-*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0129") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0130");
	ret1 = fprintf(fppres, "|%+-*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0130") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0131");
	ret1 = fprintf(fppres, "|%+-*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0131") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0132");
	ret1 = fprintf(fppres, "|%+-*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0132") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0133");
	ret1 = fprintf(fppres, "|%+-*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0133") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0134");
	ret1 = fprintf(fppres, "|%+-*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0134") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0135");
	ret1 = fprintf(fppres, "|%+-*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0135") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0136");
	ret1 = fprintf(fppres, "|%+-*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0136") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0137");
	ret1 = fprintf(fppres, "|%+-*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0137") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0138");
	ret1 = fprintf(fppres, "|%+-*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0138") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0139");
	ret1 = fprintf(fppres, "|%+-*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0139") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0140");
	ret1 = fprintf(fppres, "|%+-*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0140") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0141");
	ret1 = fprintf(fppres, "|%+-*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0141") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0142");
	ret1 = fprintf(fppres, "|%+-*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0142") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0143");
	ret1 = fprintf(fppres, "|%+-*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0143") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0144");
	ret1 = fprintf(fppres, "|%+-*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0144") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0145");
	ret1 = fprintf(fppres, "|%+-*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0145") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0146");
	ret1 = fprintf(fppres, "|%+-*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0146") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0147");
	ret1 = fprintf(fppres, "|%0+-*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0147") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0148");
	ret1 = fprintf(fppres, "|%0+-*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0148") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0149");
	ret1 = fprintf(fppres, "|%0+-*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0149") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0150");
	ret1 = fprintf(fppres, "|%0+-*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0150") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0151");
	ret1 = fprintf(fppres, "|%0+-*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0151") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0152");
	ret1 = fprintf(fppres, "|%0+-*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0152") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0153");
	ret1 = fprintf(fppres, "|%0+-*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0153") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0154");
	ret1 = fprintf(fppres, "|%0+-*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0154") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0155");
	ret1 = fprintf(fppres, "|%0+-*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0155") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0156");
	ret1 = fprintf(fppres, "|%0+-*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0156") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0157");
	ret1 = fprintf(fppres, "|%0+-*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0157") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0158");
	ret1 = fprintf(fppres, "|%0+-*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0158") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0159");
	ret1 = fprintf(fppres, "|%0+-*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0159") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0160");
	ret1 = fprintf(fppres, "|%0+-*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0160") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0161");
	ret1 = fprintf(fppres, "|%0+-*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0161") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0162");
	ret1 = fprintf(fppres, "|%0+-*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0162") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0163");
	ret1 = fprintf(fppres, "|%0+-*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0163") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0164");
	ret1 = fprintf(fppres, "|%0+-*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0164") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0165");
	ret1 = fprintf(fppres, "|%0+-*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0165") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0166");
	ret1 = fprintf(fppres, "|%0+-*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0166") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0167");
	ret1 = fprintf(fppres, "|%0+-*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0167") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0168");
	ret1 = fprintf(fppres, "|%#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0168") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0169");
	ret1 = fprintf(fppres, "|%#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0169") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0170");
	ret1 = fprintf(fppres, "|%#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0170") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0171");
	ret1 = fprintf(fppres, "|%#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0171") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0172");
	ret1 = fprintf(fppres, "|%#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0172") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0173");
	ret1 = fprintf(fppres, "|%#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0173") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0174");
	ret1 = fprintf(fppres, "|%#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0174") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0175");
	ret1 = fprintf(fppres, "|%#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0175") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0176");
	ret1 = fprintf(fppres, "|%#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0176") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0177");
	ret1 = fprintf(fppres, "|%#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0177") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0178");
	ret1 = fprintf(fppres, "|%#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0178") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0179");
	ret1 = fprintf(fppres, "|%#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0179") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0180");
	ret1 = fprintf(fppres, "|%#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0180") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0181");
	ret1 = fprintf(fppres, "|%#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0181") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0182");
	ret1 = fprintf(fppres, "|%#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0182") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0183");
	ret1 = fprintf(fppres, "|%#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0183") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0184");
	ret1 = fprintf(fppres, "|%#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0184") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0185");
	ret1 = fprintf(fppres, "|%#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0185") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0186");
	ret1 = fprintf(fppres, "|%#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0186") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0187");
	ret1 = fprintf(fppres, "|%#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0187") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0188");
	ret1 = fprintf(fppres, "|%#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0188") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0189");
	ret1 = fprintf(fppres, "|%0#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0189") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0190");
	ret1 = fprintf(fppres, "|%0#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0190") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0191");
	ret1 = fprintf(fppres, "|%0#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0191") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0192");
	ret1 = fprintf(fppres, "|%0#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0192") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0193");
	ret1 = fprintf(fppres, "|%0#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0193") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0194");
	ret1 = fprintf(fppres, "|%0#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0194") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0195");
	ret1 = fprintf(fppres, "|%0#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0195") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0196");
	ret1 = fprintf(fppres, "|%0#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0196") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0197");
	ret1 = fprintf(fppres, "|%0#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0197") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0198");
	ret1 = fprintf(fppres, "|%0#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0198") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0199");
	ret1 = fprintf(fppres, "|%0#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0199") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0200");
	ret1 = fprintf(fppres, "|%0#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0200") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0201");
	ret1 = fprintf(fppres, "|%0#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0201") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0202");
	ret1 = fprintf(fppres, "|%0#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0202") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0203");
	ret1 = fprintf(fppres, "|%0#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0203") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0204");
	ret1 = fprintf(fppres, "|%0#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0204") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0205");
	ret1 = fprintf(fppres, "|%0#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0205") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0206");
	ret1 = fprintf(fppres, "|%0#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0206") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0207");
	ret1 = fprintf(fppres, "|%0#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0207") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0208");
	ret1 = fprintf(fppres, "|%0#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0208") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0209");
	ret1 = fprintf(fppres, "|%0#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0209") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0210");
	ret1 = fprintf(fppres, "|%+#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0210") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0211");
	ret1 = fprintf(fppres, "|%+#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0211") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0212");
	ret1 = fprintf(fppres, "|%+#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0212") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0213");
	ret1 = fprintf(fppres, "|%+#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0213") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0214");
	ret1 = fprintf(fppres, "|%+#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0214") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0215");
	ret1 = fprintf(fppres, "|%+#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0215") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0216");
	ret1 = fprintf(fppres, "|%+#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0216") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0217");
	ret1 = fprintf(fppres, "|%+#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0217") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0218");
	ret1 = fprintf(fppres, "|%+#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0218") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0219");
	ret1 = fprintf(fppres, "|%+#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0219") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0220");
	ret1 = fprintf(fppres, "|%+#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0220") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0221");
	ret1 = fprintf(fppres, "|%+#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0221") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0222");
	ret1 = fprintf(fppres, "|%+#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0222") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0223");
	ret1 = fprintf(fppres, "|%+#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0223") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0224");
	ret1 = fprintf(fppres, "|%+#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0224") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0225");
	ret1 = fprintf(fppres, "|%+#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0225") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0226");
	ret1 = fprintf(fppres, "|%+#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0226") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0227");
	ret1 = fprintf(fppres, "|%+#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0227") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0228");
	ret1 = fprintf(fppres, "|%+#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0228") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0229");
	ret1 = fprintf(fppres, "|%+#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0229") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0230");
	ret1 = fprintf(fppres, "|%+#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0230") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0231");
	ret1 = fprintf(fppres, "|%0+#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0231") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0232");
	ret1 = fprintf(fppres, "|%0+#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0232") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0233");
	ret1 = fprintf(fppres, "|%0+#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0233") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0234");
	ret1 = fprintf(fppres, "|%0+#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0234") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0235");
	ret1 = fprintf(fppres, "|%0+#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0235") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0236");
	ret1 = fprintf(fppres, "|%0+#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0236") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0237");
	ret1 = fprintf(fppres, "|%0+#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0237") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0238");
	ret1 = fprintf(fppres, "|%0+#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0238") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0239");
	ret1 = fprintf(fppres, "|%0+#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0239") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0240");
	ret1 = fprintf(fppres, "|%0+#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0240") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0241");
	ret1 = fprintf(fppres, "|%0+#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0241") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0242");
	ret1 = fprintf(fppres, "|%0+#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0242") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0243");
	ret1 = fprintf(fppres, "|%0+#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0243") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0244");
	ret1 = fprintf(fppres, "|%0+#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0244") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0245");
	ret1 = fprintf(fppres, "|%0+#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0245") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0246");
	ret1 = fprintf(fppres, "|%0+#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0246") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0247");
	ret1 = fprintf(fppres, "|%0+#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0247") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0248");
	ret1 = fprintf(fppres, "|%0+#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0248") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0249");
	ret1 = fprintf(fppres, "|%0+#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0249") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0250");
	ret1 = fprintf(fppres, "|%0+#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0250") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0251");
	ret1 = fprintf(fppres, "|%0+#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0251") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0252");
	ret1 = fprintf(fppres, "|%-#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0252") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0253");
	ret1 = fprintf(fppres, "|%-#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0253") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0254");
	ret1 = fprintf(fppres, "|%-#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0254") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0255");
	ret1 = fprintf(fppres, "|%-#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0255") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0256");
	ret1 = fprintf(fppres, "|%-#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0256") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0257");
	ret1 = fprintf(fppres, "|%-#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0257") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0258");
	ret1 = fprintf(fppres, "|%-#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0258") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0259");
	ret1 = fprintf(fppres, "|%-#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0259") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0260");
	ret1 = fprintf(fppres, "|%-#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0260") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0261");
	ret1 = fprintf(fppres, "|%-#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0261") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0262");
	ret1 = fprintf(fppres, "|%-#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0262") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0263");
	ret1 = fprintf(fppres, "|%-#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0263") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0264");
	ret1 = fprintf(fppres, "|%-#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0264") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0265");
	ret1 = fprintf(fppres, "|%-#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0265") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0266");
	ret1 = fprintf(fppres, "|%-#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0266") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0267");
	ret1 = fprintf(fppres, "|%-#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0267") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0268");
	ret1 = fprintf(fppres, "|%-#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0268") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0269");
	ret1 = fprintf(fppres, "|%-#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0269") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0270");
	ret1 = fprintf(fppres, "|%-#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0270") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0271");
	ret1 = fprintf(fppres, "|%-#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0271") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0272");
	ret1 = fprintf(fppres, "|%-#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0272") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%-#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0273");
	ret1 = fprintf(fppres, "|%0-#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0273") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0274");
	ret1 = fprintf(fppres, "|%0-#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0274") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0275");
	ret1 = fprintf(fppres, "|%0-#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0275") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0276");
	ret1 = fprintf(fppres, "|%0-#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0276") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0277");
	ret1 = fprintf(fppres, "|%0-#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0277") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0278");
	ret1 = fprintf(fppres, "|%0-#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0278") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0279");
	ret1 = fprintf(fppres, "|%0-#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0279") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0280");
	ret1 = fprintf(fppres, "|%0-#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0280") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0281");
	ret1 = fprintf(fppres, "|%0-#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0281") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0282");
	ret1 = fprintf(fppres, "|%0-#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0282") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0283");
	ret1 = fprintf(fppres, "|%0-#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0283") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0284");
	ret1 = fprintf(fppres, "|%0-#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0284") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0285");
	ret1 = fprintf(fppres, "|%0-#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0285") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0286");
	ret1 = fprintf(fppres, "|%0-#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0286") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0287");
	ret1 = fprintf(fppres, "|%0-#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0287") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0288");
	ret1 = fprintf(fppres, "|%0-#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0288") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0289");
	ret1 = fprintf(fppres, "|%0-#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0289") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0290");
	ret1 = fprintf(fppres, "|%0-#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0290") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0291");
	ret1 = fprintf(fppres, "|%0-#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0291") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0292");
	ret1 = fprintf(fppres, "|%0-#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0292") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0293");
	ret1 = fprintf(fppres, "|%0-#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0293") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0-#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0294");
	ret1 = fprintf(fppres, "|%+-#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0294") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0295");
	ret1 = fprintf(fppres, "|%+-#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0295") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0296");
	ret1 = fprintf(fppres, "|%+-#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0296") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0297");
	ret1 = fprintf(fppres, "|%+-#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0297") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0298");
	ret1 = fprintf(fppres, "|%+-#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0298") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0299");
	ret1 = fprintf(fppres, "|%+-#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0299") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0300");
	ret1 = fprintf(fppres, "|%+-#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0300") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0301");
	ret1 = fprintf(fppres, "|%+-#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0301") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0302");
	ret1 = fprintf(fppres, "|%+-#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0302") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0303");
	ret1 = fprintf(fppres, "|%+-#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0303") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0304");
	ret1 = fprintf(fppres, "|%+-#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0304") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0305");
	ret1 = fprintf(fppres, "|%+-#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0305") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0306");
	ret1 = fprintf(fppres, "|%+-#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0306") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0307");
	ret1 = fprintf(fppres, "|%+-#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0307") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0308");
	ret1 = fprintf(fppres, "|%+-#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0308") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0309");
	ret1 = fprintf(fppres, "|%+-#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0309") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0310");
	ret1 = fprintf(fppres, "|%+-#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0310") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0311");
	ret1 = fprintf(fppres, "|%+-#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0311") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0312");
	ret1 = fprintf(fppres, "|%+-#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0312") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0313");
	ret1 = fprintf(fppres, "|%+-#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0313") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0314");
	ret1 = fprintf(fppres, "|%+-#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0314") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%+-#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0315");
	ret1 = fprintf(fppres, "|%0+-#*.*D|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0315") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*D|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0316");
	ret1 = fprintf(fppres, "|%0+-#*.*hhD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0316") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0317");
	ret1 = fprintf(fppres, "|%0+-#*.*hD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0317") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0318");
	ret1 = fprintf(fppres, "|%0+-#*.*lD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0318") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0319");
	ret1 = fprintf(fppres, "|%0+-#*.*llD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0319") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0320");
	ret1 = fprintf(fppres, "|%0+-#*.*jD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0320") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0321");
	ret1 = fprintf(fppres, "|%0+-#*.*zD|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0321") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zD|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0322");
	ret1 = fprintf(fppres, "|%0+-#*.*O|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0322") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*O|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0323");
	ret1 = fprintf(fppres, "|%0+-#*.*hhO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0323") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0324");
	ret1 = fprintf(fppres, "|%0+-#*.*hO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0324") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0325");
	ret1 = fprintf(fppres, "|%0+-#*.*lO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0325") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0326");
	ret1 = fprintf(fppres, "|%0+-#*.*llO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0326") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0327");
	ret1 = fprintf(fppres, "|%0+-#*.*jO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0327") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0328");
	ret1 = fprintf(fppres, "|%0+-#*.*zO|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0328") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zO|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0329");
	ret1 = fprintf(fppres, "|%0+-#*.*U|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0329") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*U|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0330");
	ret1 = fprintf(fppres, "|%0+-#*.*hhU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0330") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hhU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0331");
	ret1 = fprintf(fppres, "|%0+-#*.*hU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0331") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*hU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0332");
	ret1 = fprintf(fppres, "|%0+-#*.*lU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0332") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*lU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0333");
	ret1 = fprintf(fppres, "|%0+-#*.*llU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0333") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*llU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0334");
	ret1 = fprintf(fppres, "|%0+-#*.*jU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0334") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*jU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "#0335");
	ret1 = fprintf(fppres, "|%0+-#*.*zU|\n", width, precision, var);
	ret1 > -1 ? ft_printf("#0335") : 1;
	ret2 = ret1 > -1 ? ft_printf("|%0+-#*.*zU|\n", width, precision, var) : -1;
	fprintf(fppret, "%d\n", ret1);
	fprintf(fpftret, "%d\n", ret2);
	//@
	fprintf(fppres, "\n");
	ft_printf("\n");
	fclose(fppres);
	fclose(fppret);
	fclose(fpftret);
}
