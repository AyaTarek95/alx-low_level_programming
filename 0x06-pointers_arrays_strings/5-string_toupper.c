#include "main.h"
/**
 * string_toupper - Short description
 * @str: 2nd
 *
 * Return: Descrip
 */
char *string_toupper(char *str)

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