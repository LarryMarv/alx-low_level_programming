#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *s;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	s = malloc(sizeof(int) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		s[i] = min++;

	return (s);
}
