#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to the file.
 * @text_content: text content.
 *
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}
