/*
Необходимо составить функцию, которая определяет, сколько зерен попросил
положить на N-ую клетку изобретатель шахмат (на 1-ую – 1 зерно, на 2-ую – 2
зерна, на 3-ю – 4 зерна, …)
Данные на входе: Целое число от 1 до 64
Данные на выходе: Одно целое число. Количество зерен на данной
клетке.
*/

#include <stdio.h>
#include <inttypes.h>

#define DESK_SIZE 8
#define TOTAL_CELLS DESK_SIZE*DESK_SIZE

uint64_t getNumberBins(int);

int main(void)
{
	int numCell;
	printf("Введите номер клетки от 1 до %d: ", TOTAL_CELLS);
	scanf("%d", &numCell);

	if(numCell > 0 && numCell <= TOTAL_CELLS)
		printf("%" PRIu64 "\n", getNumberBins(numCell));
	else
		printf("Введен некорректный номер клетки!");

	return 0;
}

uint64_t getNumberBins(int num)
{
	if(num == 1) 
		return 1;
	else
		return getNumberBins(num - 1) * 2;
}
