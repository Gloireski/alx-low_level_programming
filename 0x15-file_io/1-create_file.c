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
	int fd;

	int nbytes = sizeof(text_content);

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, nbytes);

	close(fd);
	return (1);
}
