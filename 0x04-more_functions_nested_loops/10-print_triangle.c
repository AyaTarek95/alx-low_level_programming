#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: number of #
 * Return: None
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	_putchar('\n');
	for (i = 0; i < size; i++)
	{
	for (j = 1; j < size - i; j++)
		_putchar(' ');
	for (j = 0; j <= i; j++)
	_putchar('#');
	_putchar('\n');
	}
}
