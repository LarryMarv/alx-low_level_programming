#include "main.h"
/**
* _strstr - Locates a substring
* @haystack: Like a dest
* @needle: Like a source
* Return: Char substring
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (haystack);
	}

	return (0);
}

