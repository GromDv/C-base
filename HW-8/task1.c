/*
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не
надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть:
void sort_array(int size, int a[])
Всю программу загружать не надо, только одну эту функцию. Можно просто
закомментировать текст всей программы, кроме данной функции.
Данные на входе: Функция принимает на вход, первый аргумент - размер
массива, второй аргумент - адрес нулевого элемента.
Данные на выходе: Функция ничего не возвращает. Производит
сортировку переданного ей массива по возрастанию.
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void sort_array(int, int []);
int comparator(const int *, const int *);
void print_arr(int *, int );

int main(void)
{
	int in_arr[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
//	for( int i = 0; i < SIZE; i++ )
//		scanf("%d", &in_arr[i]);
	
	print_arr(in_arr, SIZE);
	sort_array(SIZE, in_arr);
	print_arr(in_arr, SIZE);

	return 0;
}

void sort_array(int size, int a[])
{
	qsort( a, size, sizeof(int), (int(*) (const void*, const void *)) comparator);
}
int comparator(const int *a, const int *b)
{
	return *a - *b;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}
