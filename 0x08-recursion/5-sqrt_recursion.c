#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
 * _sqrt_recursion - A function returning the natural square root of n
 * @n: number to get the squareroot for
 * Return: the square root of int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recurses to find sqrt
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: parameter controlling the integer
 * Return: the square root
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
