#include "main.h"

/**
* reverse_array - Function that reverses a string
* @a: array
* @n: elements of the array
* Return: Reverse of a string
*/

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0 ; i < n-- ; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
