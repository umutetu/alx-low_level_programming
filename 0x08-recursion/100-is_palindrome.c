#include "main.h"

/**
 * is_prime_number - function that return the sqrt of a natural number.
 * @n: natural number
 * Return: if it is prime 1 otherwise 0.
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (is_prime_man(n, 2));
	}
}

/**
 * is_prime_man - function that calculate if the number is prime.
 * @n: natural number
 * @i: divisor of n.
 * Return: if it is prime 1 otherwise 0.
 */

int is_prime_man(int n, int i)

{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == (n - 1) && n % i != 0)
	{
		return (1);
	}
	else
	{
		return (is_prime_man(n, i + 1));
	}
}
