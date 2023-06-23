#include <stdio.h>
/**
 * main - print biggets prime# of 612852475143
 * Return: 0 when successfull
 */
int main(void)
{
	unsigned long n = 612852475143;
	unsigned long div = 2;

		while (div < n)
	{
		if (n % div == 0)
	{
		n /= div;
	div = 2;
	}
	else
	div++;
	}

	printf("%lu\n", n);

	return (0);
}
