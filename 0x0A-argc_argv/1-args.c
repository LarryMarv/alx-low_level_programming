#include <stdio.h>

/**
* main- Print the number of arguments
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if succesful and name of the program
*/
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
