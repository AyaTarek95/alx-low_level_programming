#include "main.h"
/**
 * puts_half - Short description, single line
 * @str: Description of parameter x
 *
 * Return: Description of the returned value
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;


	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
