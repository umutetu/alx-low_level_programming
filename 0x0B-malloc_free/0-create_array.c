#include "main.h"
#include <stdlib.h>

/**
 * create_array - function creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)

{
	char *achar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	achar = malloc(sizeof(c) * size);
	if (achar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		achar[i] = c;
	return (achar);
}
