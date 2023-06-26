#include "main.h"
/**
*swap_int - Entry point
*
*Description: A C program that prints with put function
*@a: 1st
*@b: 2nd
*Return: Always 0 (success)
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
