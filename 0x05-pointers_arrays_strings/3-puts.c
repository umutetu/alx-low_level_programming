#include "main.h"

/**
* _puts - function to print a string.
* @str: parameter.
* Return: no return.
*/

void _puts(char *str)

{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}
