/*
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
Данные на входе: Целое положительное число
Данные на выходе: Одно слово: YES или NO
*/

#include <stdio.h>

#define NUM_DIGITS 3

int main(void)
{
	int a;
	printf("Введите целое число: ");
	scanf("%d", &a);

	int counter = 0;
	do
	{
		a /= 10;
		counter++;
	}
	while(a > 0);
	
	if(counter == NUM_DIGITS)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}
