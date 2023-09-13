#include "main.h"

/**
 * print_last_digit - A function that prints the last digit
 * @c: Parameter c
 * Return: Value of the last digit
 */

int print_last_digit(int c)
{
	int k;

	k = c % 10;
	if (c < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
