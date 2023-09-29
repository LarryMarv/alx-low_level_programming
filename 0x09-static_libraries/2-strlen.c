#include "main.h"

/**
* _strlen - Function that returns the legth of a string
* @s: String to be counted
* Return: String length
*/

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
