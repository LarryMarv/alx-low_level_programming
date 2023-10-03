#include "main.h"
#include <stdio.h>
/**
 * _islower - check the code if there is a lower case
 *@c: parameter to be checked
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
