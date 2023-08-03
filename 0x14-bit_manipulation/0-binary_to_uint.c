#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned number
 * @b: number to be converted
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int v = 0;
	int x;
	unsigned int len;

	len = strlen(b);
	
	if (b == NULL)
		return (0);

	for (x = len - 1; x >= 0; x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		if (b[x] == '1')
		{
			v += k;
		}
		k *= 2;

	}
	return (v);
}
