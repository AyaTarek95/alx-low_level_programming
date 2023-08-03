#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned number
 * @b: number to be converted
 *Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, val = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			val += power;
	}

	return (val);
}
