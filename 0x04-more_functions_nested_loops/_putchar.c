#include <stdio.h>
#include "main.h"
/**
* _putchar -write the character c to stdout
* @c : the character to print
* Return:0 (success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

