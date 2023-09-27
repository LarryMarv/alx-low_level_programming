#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks for palindrome in a string
 * @s: string of interest
 *
 * Return: 1 if it ispalindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of s
 * @s: string of interest
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks for palindrome
 * @s: string of interest
 * @i: iterating parameter
 * @len: length of s
 * Return: 1 if palindrome, 0 otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
