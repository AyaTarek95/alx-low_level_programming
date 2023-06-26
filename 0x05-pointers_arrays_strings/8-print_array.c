#include "main.h"
/**
 * print_array - Short description, single line
 * @a: Description of parameter x
 *@n: 1st
 * Return: Description of the returned value
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
