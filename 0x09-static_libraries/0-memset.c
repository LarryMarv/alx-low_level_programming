#include "main.h"
/**
* _memset - Fills a block of mem with a const
* @s: Pointer to string s
* @b: Value of interest
* @n: Number of bytes to be changed
* Return: New value that replaced the existing var value
*/

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (j = 0 ; n > 0 ; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
