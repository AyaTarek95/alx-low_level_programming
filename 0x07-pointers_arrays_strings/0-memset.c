#include "main.h"
/**
 * _memset - Short description, single line
 * @s: Description of parameter x
 * @b: 2nd
 * @n: 3rd
 * Return: Description of the returned value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	s[i] = 'b';

}
	return (s);
}
