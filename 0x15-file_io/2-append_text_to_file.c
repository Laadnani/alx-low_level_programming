#include "main.h"
#include "main.h"

/**
 * _strln - mimic the strlen func
 * @str: string to check
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
 * append_text_to_file - append text to a file
 * @filename: file to append text to
 * @text_content: text to be appended to the file
 * Return: 1 upon success or -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t data_w;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	data_w = write(fd, text_content, _strln(text_content));
	if (data_w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
