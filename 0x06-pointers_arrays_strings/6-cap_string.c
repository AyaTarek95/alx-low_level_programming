#include "main.h"
/**
 * isUpperLetter - Checks whether char, cap or not
 * @c: Char to check
 *
 * Return: 1 if capital, -1 if small, 0 otherwise
 */

	int isUpperLetter(char c)
	{
	int i = 0;

	if (c > 64 && c < 91)
	i++;
	else if (c == ',' || c == ';' || c == '.' || c == '!' || c == '?' ||
	c == '"' || c == '(' || c == ')' || c == '{' ||
	c == '}' || c == ' ' || c == 9 || c == '\n')
	i = -2;
		else if (c > 96 && c < 123)
		i--;

	return (i);
}

/**
 * cap_string - Capitalizes letters
 * @c: ptr to array
 *
 * Return: ptr to array
 */

		char *cap_string(char *c)
		{
		int i, checker = -2;

	for (i = 0; c[i] != '\0'; i++)
	{
	if (checker == -2 && isUpperLetter(c[i]) == -1)
	c[i] -= 32;
	checker = isUpperLetter(c[i]);
	}
return (c);
}
