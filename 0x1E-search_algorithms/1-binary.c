#include "search_algos.h"

/**
 * binary_search - Searches for a value in sorted array
 *                 of integers using binary search.
 * @array: A pointer to first element of array to search.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If value is not present or array is NULL, -1.
 *         Otherwise, the index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;
	
	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform binary search */
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		
		/* Calculate middle index */
		i = left + (right - left) / 2;
		
		/* If middle element is value */
		if (array[i] == value)
			/* Return the index */
			return (i);
		
		/* If the middle element is greater than the value */
		if (array[i] > value)
			/* Update the right boundary */
			right = i - 1;
		else
			/* Otherwise, update the left boundary */
			left = i + 1;
	}
	/* Value not found, return -1 */
	return (-1);
}
