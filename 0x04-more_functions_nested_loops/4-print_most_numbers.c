#include "main.h"
/**
 * print_most_numbers - prints from 0~9 except 2-4
 * Return: Returns 1 if upper, else 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	printf("%d", i);
	}
	printf("\n");
}
