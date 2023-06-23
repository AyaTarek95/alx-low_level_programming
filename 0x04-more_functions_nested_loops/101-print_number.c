#include "main.h"
/**
 * print_number - prints int with _putchar
 * @n: number
 * Return: none
 */
void print_number(int n)
{
	unsigned int ten, single, positive = n;
		double t = 1;

	if (n == 0)
	_putchar('0');
		else
		{
	if (n < 0)
		{
		positive = n * -1;
		_putchar('-');
		}

	while (t <= positive)
	t *= 10;
		ten = t / 10;

		while (ten >= 1)
		{
			single = positive / ten;
			_putchar(single + '0');
		positive = (positive - (ten * single));
		ten /= 10;
	}
	}
}
