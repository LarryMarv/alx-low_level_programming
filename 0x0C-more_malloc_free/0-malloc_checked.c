#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* *malloc_checked - Allocates memory using malloc
* @b: Parameter
* Return: Pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	char *result;

	result = malloc(b);
	if (result == NULL)
		exit(98);
	else
		return (result);
}
