#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_status;
	ssize_t total_read = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_status = read(fd, buffer, letters);
	if (read_status == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	total_read = read_status;
	if (write(STDOUT_FILENO, buffer, read_status) != read_status)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (total_read);
}
