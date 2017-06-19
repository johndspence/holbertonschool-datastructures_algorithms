#include "search_algos.h"

/**
 * print_array - Prints an array to stdout.
 * @array: Array to be printed.
 * @start: First element in array to print.
 * @end: Last element in array to print.
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array:");
	while (start <= end - 1)
	{
		printf(" %d,", array[start]);
		start++;
	}
	printf(" %d\n", array[start]);
}

/**
 * binary_search - Binary search algorithm
 * @array: Sorted array of int to be searched.
 * @size: Number of elements in array.
 * @value: Value to be searched for in array.
 *
 * Return: Index in array for value or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, middle, end;

	if (!array || size < 1)
	{
		return (-1);
	}

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		print_array(array, start, end);
		middle = start + (end - start) / 2;
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			start = middle + 1;
		}
		else
		{
			end = middle;
		}
	}
	return (-1);
}
