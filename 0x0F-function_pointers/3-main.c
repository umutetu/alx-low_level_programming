#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument
 * @argv: argument
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])

{
	int a, b;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	function = get_op_func(argv[2]);
	if (function == NULL)

	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", function(a, b));
	return (0);
}
