#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 when sucess
 */
int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
