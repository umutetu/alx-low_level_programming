#include "main.h"

/**
 * reverse_array - prints reverse array.
 * @a: to compared array.
 * @n: the size of array.
 * Return: reversed array.
 */

void reverse_array(int *a, int n)

{
	int swap, begin, end;

	begin = 0;
	end = n - 1;
	while (begin < end)
	{
		swap = *(a + begin);
		*(a + begin) = *(a + end);
		*(a + end) = swap;
		begin++;
		end--;
	}
}
