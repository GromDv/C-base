/*
Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
всех элементов массива.
Данные на входе: 5 целых ненулевых чисел через пробел
Данные на выходе: Одно число в формате "%.3f"
*/

#include <stdio.h>

enum { SIZE = 5 };

int main(void)
{
	int n[SIZE];
	for( int i = 0; i < SIZE; i++ )
		scanf("%d", &n[i]);
	
	int sum = 0;
	for( int i = 0; i < SIZE; i++ )
		sum += *(n + i);
		
	printf("%.3f", (float)sum / SIZE);

	return 0;
}
