#include "main.h"

/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: text to put to the new file
 *
 * Return: 1 if successfull esls -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t != s)
			return (-1);
	}

	close(fd);

	return (1);
}
