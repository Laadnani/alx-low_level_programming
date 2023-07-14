#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when success
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (n = 97; n <=102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
