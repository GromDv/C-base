#include <stdio.h>

int main(void)
{
	int a;
	printf("Введите число от 1 до 12: ");
	scanf("%d", &a);

	if(a > 0 && a <= 12) {
		if(a <= 2 || a >= 12)
			printf("winter");
		else if(a >= 3 && a <= 5)
			printf("spring");
		else if(a >= 6 && a <= 8)
			printf("summer");
		else
			printf("autumn");
	} else {
		printf("Wrong number");
	}
}
