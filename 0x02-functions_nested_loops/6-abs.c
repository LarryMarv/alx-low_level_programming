#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes an absolute value of an integer
 * @a: Parameter a
 * Return: Zero
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else
		return (a);
}

