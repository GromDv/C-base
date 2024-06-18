/*
Составить функцию, которая меняет в массиве минимальный и максимальный
элемент местами. Прототип функции
void change_max_min(int size, int a[])
Данные на входе: Функция принимает на вход размер массива и
массив чисел типа int
Данные на выходе: Функция не возвращает значения, измененный
массив сохраняется на месте исходного
*/

#include <stdio.h>

#define SIZE 10

void change_max_min(int, int []);
void print_arr(int *, int );

int main(void)
{
	int in_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//	for( int i = 0; i < SIZE; i++ )
//		scanf("%d", &in_arr[i]);
	
	print_arr(in_arr, SIZE);
	change_max_min(SIZE, in_arr);
	print_arr(in_arr, SIZE);

	return 0;
}

void change_max_min(int size, int a[])
{
	int i_min = 0, i_max = 0, max = *a, min = *a;

	for(int i = 0; i < size; i++)
	{
		if(max < a[i]) 
		{
			max = a[i];
			i_max = i;
		}
		if(min > a[i])
		{
			min = a[i];
			i_min = i;
		}
	}
	a[i_max] = min;
	a[i_min] = max;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
