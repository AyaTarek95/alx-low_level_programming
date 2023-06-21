#include "main.h"
/**
 * print_times_table - Short description, single line
 *@n : variable
 *
 * Return: Description of the returned value
 */
void print_times_table(int n)
{
	int num, multi, prod;

	if (n <= 15 && n >= 0)
	{

	for (num = 0; num <= n; num++)
	{
		_putchar(48);
			for (multi = 1; multi <= n; multi++)
	{
				_putchar(',');
				_putchar(' ');

		prod = num * multi;

				if (prod <= 9)
				_putchar(' ');
				if (prod <= 99)
				_putchar(' ');
				if (prod <= 100)
			{
				_putchar((prod / 100) + 48);
				_putchar((prod / 10) % 10 + 48);
			}
					else if (prod <= 99 && prod >= 10)

						_putchar((prod / 10) + 48);
						_putchar((prod % 10) + 48);
			}
				_putchar('\n');
		}
	}
}
