/*
Проверить строку состоящую из скобок "(" и ")" на корректность.
Данные на входе: На вход подается строка состоящая из символов '(', ')'
и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
Данные на выходе: Необходимо напечатать слово YES если скобки
расставлены верно и NO в противном случае.
Пример №1
Данные на входе: (()()).
Данные на выходе: YES
Пример №2
Данные на входе: ()(.
Данные на выходе: NO
*/

#include <stdio.h>

int main(void)
{
	char c;
	int counter = 0, flagOrder = 0;
	
	puts("Введите '.' в перед нажатием <Enter>: ");
	do
	{
		c = getchar();
		if(c == '(')
		{
			counter++;
		}
		else if(c == ')')
		{
			counter--;
		}
		if(counter < 0)
			flagOrder = 1;
	}
	while(c != '.');

	if(counter == 0 && flagOrder == 0)
		printf("\nYES");
	else
		printf("\nNO");

	return 0;
}