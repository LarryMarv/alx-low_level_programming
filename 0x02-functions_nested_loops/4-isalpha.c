#include "main.h"
#include <stdio.h>

/**
* _isalpha - Checks for alphabetic character
* @c: checks for parameter c
* Return: 1 or 0
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
