#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 when sucess
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 56; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			if (a > b)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
