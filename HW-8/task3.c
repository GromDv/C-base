/*
Написать только одну функцию, которая находит максимальный элемент в
массиве. Всю программу загружать не надо.
Прототип функции: int find_max_array(int size, int a[])
Данные на входе: Массив состоящий из целых чисел. Первый аргумент,
размер массива, второй аргумент адрес нулевого элемента.
Данные на выходе: Одно целое число
*/

#include <stdio.h>

#define SIZE 12

int find_max_array(int, int []);
void print_arr(int *, int );

int main(void)
{
	int in_arr[] = {773, 307, 371, 548, 531, 765, 402, 27, 573, 591, 217, 859};
//	for( int i = 0; i < SIZE; i++ )
//		scanf("%d", &in_arr[i]);
	
	print_arr(in_arr, SIZE);
	int max = find_max_array(SIZE, in_arr);
	printf("%d\n", max);

	return 0;
}

int find_max_array(int size, int a[])
{
	int max = *a;
	for(int i = 0; i < size; i++)
		if(max < a[i])
			max = a[i];

	return max;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
