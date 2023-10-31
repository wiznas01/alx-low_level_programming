#include "main.h"
#include <sys/stat.h>

/**
 * append_text_to_file - appends text at the end of file
 * @filename: name to the file
 * @text_content: NULL-terminated string to append to file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK) != 0)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == 1)
		return (-1);

	write_status = write(fd, text_content, strlen(text_content));
	if (write_status == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
