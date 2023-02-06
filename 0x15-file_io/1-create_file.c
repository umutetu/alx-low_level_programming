#include "main.h"

/**
 * create_file - function to create a file
 * @filename: name of file
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int flett;
	int r;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (flett = 0; text_content[flett]; flett++)
		;

	r = write(f, text_content, flett);

	if (r == -1)
		return (-1);

	close(f);

	return (1);
}
