#include <stdio.h>
/**
 *main - entry point
 *Description: prints all the numbers of base 16 in lowercas
 *Return: 0 (success)
*/
int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep off*/
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');
	return (0);
}
