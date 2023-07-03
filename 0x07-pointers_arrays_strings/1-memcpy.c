#include "main.h"
/**
 * _memcpy - Short description, single line
 * @dest: Description of parameter x
 * @src : 2nd
 * @n: 3rd
 * Return: Description of the returned value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int n,i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
