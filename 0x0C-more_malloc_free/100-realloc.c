#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the previous memory
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory
 * Return: pointer to the newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s1;
	char *s2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	s1 = malloc(new_size);
	if (!s1)
		return (NULL);

	s2 = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			s1[i] = s2[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			s1[i] = s2[i];
	}

	free(ptr);
	return (s1);
}
