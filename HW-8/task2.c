/*
Написать только одну функцию, которая ставит в начало массива все четные
элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел
между собой. Строго согласно прототипу:
void sort_even_odd(int n, int a[])
Данные на входе: Функция принимает на вход целые числа
Данные на выходе: Отсортированный исходный массив
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void sort_even_odd(int, int []);
int comparator(const int *, const int *);
void print_arr(int *, int );

int main(void)
{
	int in_arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//	for( int i = 0; i < SIZE; i++ )
//		scanf("%d", &in_arr[i]);
	
	print_arr(in_arr, SIZE);
	sort_even_odd(SIZE, in_arr);
	print_arr(in_arr, SIZE);

	return 0;
}

void sort_even_odd(int size, int a[])
{
	qsort( a, size, sizeof(int), (int(*) (const void*, const void *)) comparator);
}
int comparator(const int *a, const int *b)
{
	return *a%2 - *b%2;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
