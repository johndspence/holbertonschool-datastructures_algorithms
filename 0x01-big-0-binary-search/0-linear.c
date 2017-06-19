#include "search_algos.h"

/**
 * linear_search - Binary search algorithm
 * @array: Sorted array of int to be searched.
 * @size: Number of elements in array.
 * @value: Value to be searched for in array.
 *
 * Return: Index in array for value or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	int start, end;

	if (!array || size < 1)
	{
		return (-1);
	}

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Value checked array[%u] = [%d]\n", start, array[start]);
		if (value == array[start])
		{
			return (start);
		}
		start++;
	}
	return (-1);
}
