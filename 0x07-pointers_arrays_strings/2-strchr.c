#include "main.h"
/**
* _strchr - Locates a character in a string
* @s: String to be located
* @c: Locator
* Return: 0 upon success
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0 ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
