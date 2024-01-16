#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located or -1 if not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, i;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		size_t middle = (start + end) / 2;

		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);

			if (i != end)
				printf(", ");
		}
		printf("\n");

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			start = middle + 1;
		else
			end = middle - 1;
	}
	return (-1);
}

