#include "main.h"
/**
* _memcpy - Function that copies a memory area
* @dest: Destination memory
* @src: Source memory
* @n: Parameter controlling number of bytes or elements
* Return: Copied var
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0; /*source var*/
	int j = n; /*dest var*/

	for (i = 0 ; i < j ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
