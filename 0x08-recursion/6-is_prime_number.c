#include "main.h"

int actual_prime(int n, int i);
/**
 * is_prime_number - Checks if a number is prime by rec    ursive method
 * @n: integer to test for prime
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - Checks if a number is prime by recursive method
 * @n: integer to test for prime
 * @i: parameter
 * Return: 1 if n is prime and 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
