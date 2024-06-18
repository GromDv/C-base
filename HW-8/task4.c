/*
Написать только одну логическую функцию, которая определяет, верно ли, что
среди элементов массива есть два одинаковых. Если ответ «да», функция
возвращает 1; если ответ «нет», то 0. Строго согласно прототипу:
int is_two_same(int size, int a[]);
Данные на входе: Массив из целых чисел
Данные на выходе: Функция возвращает 1 или 0
*/

#include <stdio.h>

#define SIZE 20

int is_two_same(int, int []);
void print_arr(int *, int );

int main(void)
{
	int in_arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
//	for( int i = 0; i < SIZE; i++ )
//		scanf("%d", &in_arr[i]);
	
	print_arr(in_arr, SIZE);
	int same = is_two_same(SIZE, in_arr);
	if(same)
		printf("Yes\n");
	else
		printf("No\n");

	return 0;
}

int is_two_same(int size, int a[])
{
	int res = 0;
	for(int i = 0; i < size; i++)
		for(int j = 0; j < size; j++)
			if(a[i] == a[j] && i != j) 
			{
				res = 1;
				return res;
			}

	return res;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
