#include "main.h"

/**
 * read_textfile - read text file and print it back
 * @filename: file to read
 * @letters: number of chars to print
 * Return: number of chars written
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	size_t bytes_read, bytes_written;

	fd = open(filename, O_RDWR);
	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	buf = malloc(letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buf, letters);
	if (!bytes_read)
	{
		close(fd);
		free(buf);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (!bytes_written)
	{
		close(fd);
		free(buf);
		return (0);
	}
	return (bytes_written);
}
