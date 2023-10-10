#include "search_algos.h"

/**
 * advanced_binary_recursive - Searches recursively for a value in a sorted
 *                             array of integers using binary search.
 * @array: A pointer to the first element of the [sub]array to search.
 * @left: The starting index of [sub]array to search.
 * @right: The ending index of [sub]array to search.
 * @value: The value to search for.
 *
 * Return: If value is not present, -1.
 *         Otherwise,index where the value is located.
 *
 * Description: Prints the [sub]array being searched after each change.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i;

	/* If the right boundary is less than the left boundary */
	if (right < left)
		/* Value not found, return -1 */
		return (-1);

	printf("Searching in array: ");

	/* Print the [sub]array being searched */
	for (i = left; i < right; i++)

		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
	/* Calculate the middle index */
	i = left + (right - left) / 2;

	/* If the middle element is the value and it's the first occurrence */
	if (array[i] == value && (i == left || array[i - 1] != value))
		/* Return the index */
		return (i);

	/* If the middle element is greater than or equal to the value */
	if (array[i] >= value)
		/* Recursively search left subarray */
		return (advanced_binary_recursive(array, left, i, value));
	/* Recursively search right subarray */
	return (advanced_binary_recursive(array, i + 1, right, value));
}

/**
 * advanced_binary - Searches for value in a sorted array
 *                   of integers using advanced binary search.
 * @array: A pointer to first element of array to search.
 * @size: The number of elements in array.
 * @value: The value to search for.
 *
 * Return: If value is not present or the array is NULL, -1.
 *         Otherwise,first index where the value is located.
 */

int advanced_binary(int *array, size_t size, int value)
{
	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);
	/* Call recursive function */
	return (advanced_binary_recursive(array, 0, size - 1, value));
}
