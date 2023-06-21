#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Short description, single line
 * @n: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_to_98(int n)
{
printf("%d", n);
	if (n < 98)
    {
	while (n < 98)
	    {
	printf(", ");
	printf("%d", ++n);
	}
	}
	else
	{
	while (n > 98)
	{
	printf(", ");
	printf("%d", --n);
		}
	}
	printf("\n");
}
