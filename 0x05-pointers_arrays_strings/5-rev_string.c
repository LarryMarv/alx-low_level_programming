#include "main.h"

/**
* rev_string - Reverses a string
* @s: Parameter
* Return: Void
*/

void rev_string(char *s)
{
int c = 0;

	while (s[c] != '\0')
	{
	c++;
	}

	for (c -=  1; c >= 0; c--)
	{
	_putchar(s[c]);
	}
	_putchar('\n');
}
