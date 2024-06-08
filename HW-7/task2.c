/*
Ввести с клавиатуры массив из 5 элементов, найти минимальный из них.
Данные на входе: 5 целых чисел через пробел
Данные на выходе: Одно единственное целое число
*/

#include <stdio.h>

enum { SIZE = 5 };

int main(void)
{
	int n[SIZE];
	for( int i = 0; i < SIZE; i++ )
		scanf("%d", &n[i]);
	
	int min = *n;
	for( int i = 0; i < SIZE; i++ )
		if(min >= *(n + i))
			min = *(n + i);
		
	printf("%d", min);

	return 0;
}
