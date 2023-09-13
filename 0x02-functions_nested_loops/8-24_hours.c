#include "main.h"

/**
 * jack_bauer - Functions that prints every minute
 * Return: void
 */

void jack_bauer(void)
{
	/*declaration of integers*/
	int i, j;

	for (i = 0 ; i < 24 ; i++)/*first loop*/
	{
		for (j = 0 ; j < 60 ; j++)/*second loop*/
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
