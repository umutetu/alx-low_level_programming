#include "main.h"

/**
 * _islower - Shows 1 if the input is a lowercase case.
 *
 * @c: The character input
 *
 * Return: 1 for lowercase case 0 for the others
 *
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
