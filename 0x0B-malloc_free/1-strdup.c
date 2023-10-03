#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Function that duplicate to new memory space location
 * @str: character of interest
 * Return: 0 upon success
 */
char *_strdup(char *str)
{
	char *arr;
	int i, j = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	arr = malloc(sizeof(char) * (i + 1));

	if (arr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		arr[j] = str[j];

	return (arr);
}
