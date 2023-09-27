#include "main.h"
/**
* _pow_recursion - Functions that returns the value of x power y
* @x: Base  integer
* @y: Power itneger
* Return: X power of y
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
