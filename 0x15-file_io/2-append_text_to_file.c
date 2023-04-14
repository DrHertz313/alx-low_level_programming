#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_written, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;

		n_written = write(fd, text_content, i);
		if (n_written == -1 || n_written != i)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
