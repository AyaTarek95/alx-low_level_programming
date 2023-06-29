#include "main.h"
/**
 * cap_string - Short description, single line
 * @str: Description of parameter x
 *
 * Return: Description of the returned value
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
		str[i] -= 32;
		}
	}
	return (str);
}
