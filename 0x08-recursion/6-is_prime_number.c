#include "main.h"

/**
 * is_prime - that detects if the number is a prime number.
 * @n: number.
 * @c: divisor.
 * Return: if n is a prime number 1. if n is not a prime number 0.
 */

int is_prime(int n, int c)

{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number -that detects if an input number is a prime number.
 * @n: number.
 * Return: if n is a prime number 1. if n is not a prime number 0.
 */

int is_prime_number(int n)

{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
