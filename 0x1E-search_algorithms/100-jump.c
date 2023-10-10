#include "search_algos.h"
/**
  * jump_search - Searches for a value in sorted array
  *               of integers using jump search.
  * @array: A pointer to first element of array to search.
  * @size: The number of elements in array.
  * @value: The value to search for.
  *
  * Return: If value is not present or array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	/* Check if array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate jump step size */
	step = sqrt(size);

	/* Perform jump search */
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store previous jump position */
		i = jump;

		/* Update jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	/* Adjust jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within the identified range */
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	/* Check if the value is found and return the corresponding index */
	return (array[i] == value ? (int)i : -1);
}
