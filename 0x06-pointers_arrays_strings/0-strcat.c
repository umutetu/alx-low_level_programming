#include "main.h"

/**
 * _strcat -concatenates two strings by @src.
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	d = 0;
	while (dest[d++])
		s++;

	for (d = 0; src[d]; d++)
		dest[s] = src[d];
	return (dest);
}
