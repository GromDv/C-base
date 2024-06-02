/*
Ввести целое число и определить, верно ли, что все его цифры четные
Данные на входе: Одно целое число
Данные на выходе: YES или NO
*/

#include <stdio.h>

int main(void)
{
	int a;
	printf("Введите целое число: ");
	scanf("%d", &a);

	do
	{
		if(a%2 != 0)
		{
			printf("NO");
			return 0;;
		}
		a /= 10;
	}
	while(a > 0);
	printf("YES");

	return 0;
}
