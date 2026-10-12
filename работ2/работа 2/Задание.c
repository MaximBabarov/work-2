#include <stdio.h>
#include <locale.h>

int time();
int text();
int calc();

int main()
{
	setlocale(LC_ALL, "RUS");
	time();
	text();
	calc();
	homework();
	return 0;
}

int calc()
{
	int L, n, k, m;
	L = 335;
	n = 3;
	k = 4;
	m = 2;
	printf("ƒано:\n%15.0d\n%15.0d\n       --------------------\n ответ: + %*.*d . %*.*d", n, L, k, k ,n / L, m,  m, n % L);
	return 0;
}

int time()
{
	int N, K;
	N = 10;
	K = 35;
	printf("сейчас %d часов, %d минут 00 секунд\n", N, K);
	printf("идЄт %d минута суток\n", N*60+K);
	printf("ƒо полуночи осталось %d часов и %d минут\n", 13, 25);
	printf("— 8.00 прошло %d секунд\n", 2*3600+35*60);
	printf("“екущий час  = %6.2f суток  и текуща€ минута = %6.2f часа\n", N/24., K/60.);
	return 0;
}

int text() 
{
	printf("123\n");
	printf("\n");
	printf("1\n2\n3\n");
	printf("\n");
	printf("1\n 2\n  3\n");
	printf("\n");
	printf("%d,%d,%d,%d\n", 1, 2, 3, 4);
	printf("\n");
	printf("%10.3f\n ", 12.234657);
	printf("%11.5f\n ", 12.234657);
	printf("\n");
	printf("ќстаток от делени€ %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("ќстаток от делени€ %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("результат умножени€ %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("\n");
	printf("(оригинал) %g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("(d) %d разделить %d равно %d\n ", 5., 2000000., 5. / 2000000);
	printf("(f) %f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("(g) %g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("(e) %e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);
	return 0;
}

int homework()
{
	int X;
	X = 1200;
	printf("дано:\n");
	printf("количество человек - 4\n");
	printf("размер чаевыех - 15% от счЄта\n");
	printf("цена в одном чеке - X\n");
	printf("количество чаевых, полученных официантом - ?\n");
	printf("\n");
	printf("решение:\n");
	printf("чаевые с одного чека на %d в размере %d процентов - %8.2f\n", X, 15, X * 0.15);
	printf("сумма чаевых, полученных официантом - %8.2f\n", X * 0.15 * 4);
	printf("\n");
	printf("ответ: %8.2f", X * 0.15 * 4);
	return 0;
}