/*
Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.
int is_happy_number(int n)
Данные на входе: Целое не отрицательное число
Данные на выходе: YES или NO
*/

#include <stdio.h>

int is_happy_number(int);

int main(void)
{
	int a;
	printf("Введите целое не отрицательное число: ");
	scanf("%d", &a);
	
	if(is_happy_number(a))
		printf("YES");
	else
		printf("NO");

	return 0;
}

int is_happy_number(int num)
{
	int sum = 0, mult = 1;
	
	while(num > 0)
	{
		sum += num % 10;
		mult *= num % 10;
		num /= 10;
	}
	if(sum == mult)
		return 1;
	else
		return 0;
}
