/*
Дан массив из 10 элементов. Определить, какое число в массиве встречается
чаще всего. Гарантируется, что такое число ровно 1.
Данные на входе: 10 целых числе через пробел
Данные на выходе: Одно число, которое встречается чаще других
*/

#include <stdio.h>

enum { SIZE = 10 };

int maxRepeat_counter(int *, int );

int main(void)
{
	int n[SIZE];
	for( int i = 0; i < SIZE; i++ )
		scanf("%d", &n[i]);
	
	int maxNumIndex = maxRepeat_counter(n, SIZE);
	printf("%d\n",n[maxNumIndex]);

	return 0;
}

int maxRepeat_counter(int *in_arr, int size)
{
	int m[size];
	int max = 0, indx = 0;
	
	for(int i = 0; i < size; i++)
		m[i] = 0;
	
	for(int j = 0; j < size; j++)
		for(int i = 0; i < size; i++)
			if(in_arr[j] == in_arr[i])
				m[j]++;
			
	for(int j = 0; j < size; j++)
		if(max < m[j])
		{
			max = m[j];
			indx = j;
		}
	return indx;
}
