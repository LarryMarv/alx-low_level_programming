#include "main.h"
#include <stdlib.h>
/**
 * create_array - Function that creates an array of size
 * @size: size of array
 * @c: char of interest
 * Return: pointer to array, NULL if otherwise
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
