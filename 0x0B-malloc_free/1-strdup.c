#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy a string.
 * @str: string to be copied.
 * Return: pointer to the copied string.
 */

char *_strdup(char *str)

{
	int size, i;
	char *cpStr;

	size = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	size++; /* add 1 to print NULL*/
	cpStr = malloc((size) * sizeof(char));
	if (cpStr == NULL)
		return (0);
	for (i = 0; i < (size); i++)
		*(cpStr + i) = *(str + i);
	return (cpStr);
}
