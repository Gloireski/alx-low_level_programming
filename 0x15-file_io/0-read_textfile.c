#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to standard output.
 * @filename: pointer to the file.
 * @letters: nombre of letters.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;

	char *buff = malloc(sizeof(char *) *  letters);

	if (filename == NULL)
		return (0);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
