#include "main.h"
#include <string.h>
/**
 * _strcat  - Short description, single line
 * @src: Description of parameter x
 * @dest : desc
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (*dest[c])
		c++;
	for (c2 = 0; *src[c2]; c2++)
		*dest[c++] = *src[c2];
	return (dest);
}
