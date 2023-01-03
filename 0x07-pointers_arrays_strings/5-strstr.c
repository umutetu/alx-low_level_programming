#include "main.h"

/**
 * _strstr - function that finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/

char *_strstr(char *haystack, char *needle)

{
	char *byhaystack;
	char *poneedle;

	while (*haystack != '\0')
	{
		byhaystack = haystack;
		poneedle = needle;
		while (*haystack != '\0' && *poneedle != '\0' && *haystack == *poneedle)
		{
			haystack++;
			poneedle++;
		}
		if (!*poneedle)
			return (byhaystack);
		haystack = byhaystack + 1;
	}
	return (0);
}
