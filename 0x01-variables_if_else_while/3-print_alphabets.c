#include <stdio.h>

/**
 * main - function to print small letters and capital letters
 *
 *Return: value 0.
 */

int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
		putchar('\n');
		return (0);

}
