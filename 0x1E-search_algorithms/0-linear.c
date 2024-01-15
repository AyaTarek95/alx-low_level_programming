#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of ints
 * using linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: target to find
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
		return (-1);
	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
