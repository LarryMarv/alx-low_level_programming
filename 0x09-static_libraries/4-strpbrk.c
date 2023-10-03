#include "main.h"
/**
* _strpbrk - Searches a string for any set of bytes
* @s: What is matched from accept
* @accept: String to be matched by s
* Return: What has been matched
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0 ; accept[i] ; i++)
		{
		if (*s == accept[i])
		return (s);
		}
		s++;
	}
	return ('\0');
}
