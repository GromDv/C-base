/*
Дано натуральное число N. Посчитать количество «1» в двоичной записи
числа.
Данные на входе: Натуральное число
Данные на выходе: Целое число - количество единиц в двоичной записи
числа.
*/

#include <stdio.h>

int sum_ones(int);

int main(void)
{
	int a;
	printf("Введите натуральное число: ");
	scanf("%d", &a);
	
	printf("%d", sum_ones(a));

	return 0;
}

int sum_ones(int num)
{
	if(num > 1)
		return num % 2 + sum_ones(num >> 1);
	else
		return num % 2;
}
