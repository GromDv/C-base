/*
Составить функцию, которая определяет сумму всех чисел от 1 до N и
привести пример ее использования.
Пример №1
Данные на входе: Одно целое положительное число N
Данные на выходе: Целое число - сумма чисел от 1 до N
*/

#include <stdio.h>

int sumFrom0toNum(int);

int main(void)
{
	int a;
	printf("Введите целое не отрицательное число: ");
	scanf("%d", &a);
	
	printf("%d", sumFrom0toNum(a));

	return 0;
}

int sumFrom0toNum(int num)
{
	int sum = 0;
	
	while(num > 0)
		sum += num--;

	return sum;
}
