#include "main.h"

/**
* swap_int - Functions that swaps int values
* @a: int a
* @b: int b
* Return: Void, literally nothing
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
