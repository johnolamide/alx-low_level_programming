#include "search_algos.h"

/**
 * binary_search - searches for a value in an array using Binary search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left;
	size_t right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		size_t mid;

		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - print the array
 * @array: pointer to the first element of the array
 * @left: left value
 * @right: right value
 * Return: void
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
		printf("%d ", array[i]);
	printf("\n");
}
