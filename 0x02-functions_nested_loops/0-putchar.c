#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 * Description: print putchar
 * Return: 0 (success)
*/
int putchar(char c)
{
	return (write(1, &c, 1));
}
