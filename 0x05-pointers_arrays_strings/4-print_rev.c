#include "main.h"
/**
 * print_rev - Short description, single line
 * @s: Description of parameter x
 *
 * Return: Description of the returned value
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0;

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
