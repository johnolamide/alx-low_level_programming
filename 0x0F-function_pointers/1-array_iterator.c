#include "function_pointers.h"
/**
 * array_iterator - executes a function on every element in an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
