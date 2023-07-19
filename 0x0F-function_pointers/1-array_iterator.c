#include "function_pointers.h"
/**
 * array_iterator - maps an array
 * @array: 1st
 * @size: 2ns
 * @action: 3rd
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
