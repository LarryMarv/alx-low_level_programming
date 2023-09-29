#include <stdio.h>

/**
* main- Print all arguments
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if succesful and name of the program
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
	printf("%s\n", argv[i]);
	return (0);
}
