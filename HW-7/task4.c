/*
Считать массив из 10 элементов и отсортировать его по последней цифре.
Данные на входе: 10 целых чисел через пробел
Этот же массив отсортированный по последней цифре
*/

#include <stdio.h>

enum { SIZE = 10 };

void arr_sort_last_dig(int *);
void print_arr(int *);
void swap(int *, int , int);

int main(void)
{
	int n[SIZE];
	for( int i = 0; i < SIZE; i++ )
		scanf("%d", &n[i]);
	
	arr_sort_last_dig(n);
	print_arr(n);

	return 0;
}

void swap(int *arr, int i, int j)
{
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

void arr_sort_last_dig(int *arr)
{
	int flag = 0;
	do
	{
		flag = 0;
		for(int i = 0; i < SIZE-1; i++)
		{
			if(arr[i]%10 > arr[i+1]%10)
			{
				swap(arr, i, i+1);
				flag = 1;
			}
		}
	}
	while(flag == 1);
}

void print_arr(int *arr)
{
	for(int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
