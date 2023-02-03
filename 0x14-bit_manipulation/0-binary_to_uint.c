#include "main.h"

/**
 * binary_to_int - this function converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_int(const char *b)
{
	unsigned int i;
	int len, num;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, num = 1; len >= 0; len--, num *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i += num;
		}
	}

	return (i);
}
