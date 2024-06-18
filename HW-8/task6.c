/*
Определить количество положительных элементов квадратной матрицы,
превышающих по величине среднее арифметическое всех элементов главной
диагонали. Реализовать функцию среднее арифметическое главной
диагонали.
Данные на входе: 5 строк по 5 целых чисел через пробел
Данные на выходе: Одно целое число
*/

#include <stdio.h>

#define MATRIX_SIZE 5
#define SIZE MATRIX_SIZE*MATRIX_SIZE

float diag_average(int, int []);
int counter(int , int [], float );
void print_arr(int *, int );

int main(void)
{
	int in_arr[] = {1,1,1,1,1,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5};
//	for( int i = 0; i < SIZE; i++ )
//		scanf("%d", &in_arr[i]);
	
	print_arr(in_arr, MATRIX_SIZE);
	printf("average = %f\n", diag_average(MATRIX_SIZE, in_arr));
	printf("num = %d\n", counter(MATRIX_SIZE, in_arr, diag_average(MATRIX_SIZE, in_arr)));

	return 0;
}

float diag_average(int size, int a[])
{
	int sum = 0;
	for(int i = 0; i < size; i++)
		sum += *(a + i*size + i);

	return (float) sum / size;
}

int counter(int size, int a[], float avg)
{
	int counter = 0;
	for(int i = 0; i < size*size; i++)
		if((float)a[i] > avg)
			counter++;
			
	return counter;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
			printf("%d ", *(arr + i*MATRIX_SIZE + j));
		printf("\n");
	}
		
	printf("\n");
}
