#include "main.h"

/** append_text_to_file - it does exactly what the name suggests
 * @filename: file to append to
 * @text_content: text to append
 *
 * Return: -1 on failure 1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
	return(1);
}
