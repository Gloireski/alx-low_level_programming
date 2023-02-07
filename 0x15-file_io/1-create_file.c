#include "main.h"

/**
 * create_file -  reads a text file and prints it to standard output.
 * @filename: pointer to the file.
 * @text_content: nombre of letters.
 *
 * Return: ...
 */

int create_file(const char *filename, char *text_content)
{
	int fd, readed;

	size_t  = malloc(sizeof(text_content));

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY, 600);
	if (fd == -1)
		return (-1);
	write(fd, text_content, size_t);

	free(size_t);
	close(fd);
	return (1);
}
