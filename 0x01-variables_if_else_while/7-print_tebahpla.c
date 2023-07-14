#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when success
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
