#include "main.h"

/**
 * _memcpy - function that copies memory area,
 * @dest: to memory area.
 * @src: from memory area.
 * @n: bytes to be copy.
 * Return: the pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	*(dest + i) =  *(src + i);
	return (dest);
}
