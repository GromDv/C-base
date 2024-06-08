/*
Написать рекурсивную функцию возведения целого числа n в степень p.
int recurs_power(int n, int p)
Используя данную функцию, решить задачу.
Данные на входе: Два целых числа -100 >= n >= 100 и 0 >= p >= 100
Данные на выходе: Одно целое число n в степени p
*/

#include <stdio.h>

int recurs_power(int, int);

int main(void)
{
	int n, p;
	printf("Введите два целых числа: ");
	scanf("%d%d", &n, &p);
	
	printf("%d", recurs_power(n, p));

	return 0;
}
int recurs_power(int n, int p)
{
	int result = 1;
	
	if(p > 0)
		result = n * recurs_power(n, p - 1);
	
	return result;
}
