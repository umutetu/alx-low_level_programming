#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the min number of coins
 * @argc: number of arguments.
 * @argv: argument
 * Return: Always 0
 */

int main(int argc, char **argv)

{
	int coins, i, ammount;
	int value[5] = {25, 10, 5, 2, 1};

	coins = 0;
	ammount = atoi(argv[argc - 1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (ammount <= 0)
	{
		printf("0\n");
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value[i] <= ammount)
			{
				coins = coins + (ammount / value[i]);
				ammount = ammount - (ammount / value[i]) * value[i];
				if (ammount == 0)
				{
					printf("%d\n", coins);
					break;
				}
			}
		}
	}
	return (0);
}
