/*
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
элемента.
Данные на входе: 12 целых чисел через пробел
Данные на выходе: 12 целых чисел через пробел
*/

#include <stdio.h>

enum { SIZE = 12, N_SHIFT = 4 };

void arr_r_shift(int, int *);
void print_arr(int *);

int main(void)
{
	int n[SIZE];
	for( int i = 0; i < SIZE; i++ )
		scanf("%d", &n[i]);
	
	arr_r_shift(N_SHIFT, n);
	print_arr(n);

	return 0;
}

void arr_r_shift(int num, int *arr)
{
	for(int j = 0; j < num; j++)
	{
		int tmp = arr[SIZE-1];
		for(int i = SIZE-1; i > 0; i--)
			arr[i] = arr[i-1];
			
		arr[0] = tmp;
	}
}

void print_arr(int *arr)
{
	for(int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
