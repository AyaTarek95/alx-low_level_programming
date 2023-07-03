#include "main.h"
/**
 * print_chessboard - Short description, single line
 * @a: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			printf("%c", a[i][j]);

		printf("\n");
	}
}
