#include "main.h"

/**
 * binary_to_uint - function that convert a binary number to an
 * unsigned int.
 * @b: pointer to the string
 *
 * Return: unsigned int.
 */

uigned int binary_to_uint(const char *b)

{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);
	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i)  == '1')
			num = (num << 1) | 1;/*insert 1 and make displacement*/
		else if (*(b + i) == '0')
			num <<= 1; /*only displace*/
		else
			return (0);
	}
	return (num);
}
