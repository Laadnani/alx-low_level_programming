#include "main.h"

#define BUFFER 1024

/**
 * cpi - copy the content of a file src into a file dest
 * @argc: file name  - src file - dest file
 * @argv: arguments vector
 * Return: 1 upon success or exit codes other wise
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd;
	char buf[BUFFER];
	ssize_t bytes_r, bytes_w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
		exit(98);
	}
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_r = read(src_fd, buf, BUFFER)) > 0)
	{
		bytes_w = write(dest_fd, buf, bytes_r);
		if (bytes_w == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't wrtie to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_r == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from %s\n", argv[1]);
	}
	close(src_fd);
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}
	close(dest_fd);
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}
