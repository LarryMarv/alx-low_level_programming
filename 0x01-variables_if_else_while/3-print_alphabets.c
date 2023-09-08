#include <stdio.h>
/**
 * main -the function  prints alphaabets in lower & upper cases
 *
 * Return: 0 upon success
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alpha[i]);
	}
		putchar('\n');
		return (0);
}
