#include "main.h"
/**
*main - entry point
*Description: print_alphabet using _putchar function to print
*						the alphabet a_z
*return : 0 (success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
		return (0);
}
