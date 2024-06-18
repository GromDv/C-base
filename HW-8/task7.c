/*
Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х
цветов, например, черного и белого (см. рисунок). Каждая клетка имеет
координату, состоящую из буквы и цифры. Горизонтальное расположение
клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8.
Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по
заданной координате определить цвет клетки.
Данные на входе: В единственной строке входного файла записана
координата клетки на шахматной доске: всего два символа – буква и цифра
(без пробелов).
Данные на выходе: В выходной файл нужно вывести «WHITE», если
указанная клетка имеет белый цвет и «BLACK», если она черная.
*/

#include <stdio.h>

#define SIZE 8

int get_color(int , int );

int main(void)
{
	FILE *f;
	int num, simb;
	signed char c;
	
	f = fopen("in.txt", "r");
	while ( (c = fgetc(f))!= EOF ) {
		if(c >= '0' && c <= '9')
			num = c-'0';
		else if(c >= 'A' && c <= 'H')
			simb = c-'A';
	}
	fclose (f);
	
	f = fopen("out.txt", "w");
	if(get_color(simb, num))
		fprintf(f, "WHITE");
	else
		fprintf(f, "BLACK");
	fclose (f);

	return 0;
}

int get_color(int simb, int num)
{
	return (simb*SIZE + num - 1) % 2;
}
