#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - programn that print the addition of two positive numbers.
 * @argc: number of arguments.
 * @argv: argument
 * Return: Always 0
*/

int main(int argc, char **argv)

{

	int add, i, j;

	add = 0;
	for (i = 1; i < argc; i++)

	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
