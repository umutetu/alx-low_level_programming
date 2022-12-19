#include "main.h"
#include <stdio.h>

/**
* print_array - function to print elements of an array.
* @a: parameter as an array.
* @n: parameter for the number of elements
* Return: no return.
*/

void print_array(int *a, int n)

{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
