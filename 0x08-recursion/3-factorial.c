#include "main.h"
/**
* factorial - Factorial of an integer n
* @n: Integer of interest
* Return: Factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
