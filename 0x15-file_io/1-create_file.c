#include "main.h"

/**
 * _strln - mimic the strlen func
 * @str - string to check
 * Return: lenght of the string
 */

ssize_t _strln(const char *str)
{
	ssize_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * create_file - create a new file
 * @filename : new file to create
 * text_content - text to add to the new file
 * Return: 1 upon success or -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t data_w;

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		data_w = write(fd, text_content, _strln(text_content));
		if (!data_w)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
