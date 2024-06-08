/*
Составить рекурсивную функцию. Выведите все числа от A до B
включительно, в порядке возрастания, если A < B, или в порядке убывания в
противном случае.
Данные на входе: Два целых числа через пробел.
Данные на выходе: Последовательность целых чисел.
*/

#include <stdio.h>

void print_numbers(int,int);

int main(void)
{
	int a, b;
	printf("Введите через пробел два целых числа: ");
	scanf("%d %d", &a, &b);
	
	print_numbers(a, b);

	return 0;
}

void print_numbers(int a, int b)
{
	if(a <= b)
	{
		printf("%d ", a);
		if(a < b)
			print_numbers(a + 1, b);
	}
	else
	{
		if(a > b)
			print_numbers(a, b + 1);
		printf("%d ", b);
	}
}
