#include "main.h"

/**
 * read_textfile - function to read a text file and prints the letters
 * @filename: name of file
 * @letters: numbers of letters should read and print.
 *
 * Return: 2 success, otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t nrd, nwr;
	char *p;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	p = malloc(sizeof(char) * (letters));
	if (!p)
		return (0);

	nrd = read(f, p, letters);
	nwr = write(STDOUT_FILENO, p, nrd);

	close(f);

	free(p);

	return (nwr);
}
