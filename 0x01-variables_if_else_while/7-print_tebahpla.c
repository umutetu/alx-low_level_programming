#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Return: zero value
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
