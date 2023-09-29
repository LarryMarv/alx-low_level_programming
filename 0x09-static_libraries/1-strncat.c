#include "main.h"

/**
* _strncat - Concatenating two strings
* @dest: Destination string
* @src: Source string
* @n: Parameter controlling dest and src
* Return: New dest with appended n char
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int j;

	for (j = 0 ; j < n && *src != '\0' ; j++)
	{
		dest[len + j] = *src;
		src++;
	}
	dest[len + j] =  '\0';
	return (dest);
}

