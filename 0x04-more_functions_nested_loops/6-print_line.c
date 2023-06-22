#include "main.h"

/**
 * print_line - prints a line ___
 * @n: number of _
 * Return: None
 */

void print_line(int n)
{
	if (n <= 0)
		printf("\n");
		else
		{
		printf("_");
		print_line(n - 1);
	}
}
