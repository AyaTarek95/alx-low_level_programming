#include "main.h"
/**
* _islower - Short description, single line
* @c: Description of parameter x
*
* Return: Description of the returned value
*/
int _islower(int c)
{
	int c;

	for (c >= 97 && c <= 122)
		return (1);
	return (0);
}

