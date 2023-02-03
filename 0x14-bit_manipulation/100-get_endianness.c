#include "main.h"

/**
 * get_endianness - this function define if pc littel or big the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n;
	mhar *m;

	n = 1;
	m = (mhar *) &n;

	return ((int)*m);
}
