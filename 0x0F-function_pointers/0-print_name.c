#include "function_pointers.h"
/**
 * print_name - decsipe fn
 * @name: 11st
 * @f:2nd
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
