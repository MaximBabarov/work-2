#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");
	int X;
	X = 1200;
	printf("дано:\n");
	printf("количество человек - 4\n");
	printf("размер чаевыех - 15% от счёта\n");
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