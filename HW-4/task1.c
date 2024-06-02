/*
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех 
чисел от a до b.
Данные на входе: Два целых числа по модулю не больше 100
Данные на выходе: Сумма квадратов от первого введенного числа до
второго
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int a, b, start, finish;
	printf("Введите через пробел два числа от -100 до 100: ");
	scanf("%d %d", &a, &b);

	if(a >= -100 && a <= 100 && b >= -100 && b <= 100) 
	{
		uint32_t sum = 0; 
		if(a <= b) 
		{
			start = a;
			finish = b;
		} else {
			start = b;
			finish = a;
		}
		for(int i = start; i <= finish; i++)
		{
			sum += i * i;
		}
		printf("%" PRIu32, sum);

	} else {
		printf("Введены некорректные числа!");
	}
	return 0;
}
