#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 when successfull
 */
int main(void)
{
	int i = 97;
	int l = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (l <= 90)
	{
		putchar(l);
		l++;
	}
	putchar("\n");
	return (0);

}
