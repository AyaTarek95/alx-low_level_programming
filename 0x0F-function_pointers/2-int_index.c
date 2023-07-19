#include "function_pointers.h"
/**
 * array_iterator - maps an array
 * @array: 1st
 * @size: 2ns
 * @action: 3rd
 * Return: always 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
