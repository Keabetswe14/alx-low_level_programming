#include "search_algos.h"

/**
 * linear_search - Searches for value in array
 *                 of integers using linear search.
 * @array: A pointer to first element of array to search.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If value is not present or array is NULL, -1.
 *         Otherwise,first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (i = 0; i < size; i++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* If the value is found */
		if (array[i] == value)

			/* Return the index of the value */
			return (i);
	}

	/* Value not found, return -1 */
	return (-1);
}
