#include "main.h"
/**
 * puts2 - Short description, single line
 * @str: Description of parameter x
 *
 * Return: Description of the returned value
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
