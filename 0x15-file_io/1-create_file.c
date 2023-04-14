#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file and writes text to it
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_written, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
