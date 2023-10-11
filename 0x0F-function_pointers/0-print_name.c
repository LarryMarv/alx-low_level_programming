#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - Prints a name as it is
* @name: Name to be printed
* @f: Pointer to a function that prints a name
* Return: name and nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
