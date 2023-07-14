#include <stdio.h>
/**
 * main - entry point
 *
 * Return: output 0 when successful
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
