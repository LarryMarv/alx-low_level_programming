#include "main.h"

/**
 * _puts - check the code
 * @str: String to be printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
		_putchar(str[j]);
	_putchar('\n');
}
