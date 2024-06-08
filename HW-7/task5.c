/*
Считать массив из 10 элементов и отобрать в другой массив все числа, у
которых вторая с конца цифра (число десятков) – ноль.
Данные на входе: 10 целых чисел через пробел.
Данные на выходе: Целые числа через пробел, у которых вторая с конца
цифра - ноль
*/

#include <stdio.h>

enum { SIZE = 10 };

void print_arr(int *, int);
int new_Arr_counter(int *, int );
void new_Arr_fill(int *, int , int *);

int main(void)
{
	int n[SIZE];
	for( int i = 0; i < SIZE; i++ )
		scanf("%d", &n[i]);
	
	int sizeNewArr = new_Arr_counter(n, SIZE);
	int newArr[sizeNewArr];
	new_Arr_fill(n, SIZE , newArr);
	print_arr(newArr, sizeNewArr);

	return 0;
}

void print_arr(int *arr, int size)
{
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
		
	printf("\n");
}

int new_Arr_counter(int *in_arr, int size)
{
	int cnt = 0;
	
	for(int i = 0; i < size; i++)
		if(in_arr[i]/10%10 == 0)
			cnt++;
			
	return cnt;
}

void new_Arr_fill(int *in_arr, int size, int *out_arr)
{
	int cnt = 0;
	
	for(int i = 0; i < size; i++)
		if(in_arr[i]/10%10 == 0) 
		{
			out_arr[cnt] = in_arr[i];
			cnt++;
		}
}
