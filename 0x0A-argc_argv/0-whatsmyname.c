#include <stdio.h>

/**
* main- Print a program name
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if succesful and name of the program
*/
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
