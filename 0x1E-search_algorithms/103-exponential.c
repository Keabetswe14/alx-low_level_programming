#include "search_algos.h"
/**
  * _binary_search - Searches for value in sorted array
  *                  of integers using binary search.
  * @array: A pointer to first element of array to search.
  * @left: The starting index of [sub]array to search.
  * @right: The ending index of [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	while (right >= left)
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
		/* If middle element is greater than the value */
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

/**
  * exponential_search - Searches for value in sorted array
  *                      of integers using exponential search.
  * @array: A pointer to first element of array to search.
  * @size: The number of elements in array.
  * @value: The value to search for.
  *
  * Return: If value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);
	/* Perform exponential search if the first element is not the target value */
	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	/* Determine range where value is expected to be found */
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	/* Perform binary search within the identified range */
	return (_binary_search(array, i / 2, right, value));
}
