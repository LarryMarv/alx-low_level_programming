#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - searches for an interger
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * @array: pointer to the array to be used
 *
 * Return: index of the first element for
 * which the cmp function does not return 0
 * -1 if no element matches
 * If size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]))
			return (index);
	}
	return (-1);
}
