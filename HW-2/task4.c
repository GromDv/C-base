#include <stdio.h>

int main(void)
{
	int a, sum = 0, counter = 0;
	printf("Введите число: ");
	scanf("%d", &a);

	do {
		sum += a % 10;
		if(a%10 > 0)
			counter++;
		a /= 10;
		
	} while(a > 0);
	
	printf("Среднее арифметическое всех цифр = %.2f", (float)sum / (float)counter);
	
}
