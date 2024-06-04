/*
Составить функцию, которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
https://younglinux.info/algorithm/euclidean
int nod(int a, int b)
*/

#include <stdio.h>
#include <inttypes.h>

int nod(int, int);

int main(void)
{
	int a, b;
	printf("Введите через пробел два целых положительных числа: ");
	scanf("%d %d", &a, &b);

	if(a > 0 && b > 0)
		printf("НОД = %d\n", nod(a, b));
	else
		printf("Введены некорректные числа!");

	return 0;
}

int nod(int a, int b)
{
	while(a > 0 && b > 0)
	{
		if(a > b)
			a = a % b;
		else
			b = b % a;
	}
	return a + b;
}
