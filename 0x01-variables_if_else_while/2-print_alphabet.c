#include <stdio.h>
/**
 * main - entry point
 *
 * Return: output 0 when successful
 */
int main(void)
{

	int az[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(az[i]);
	}
	putchar('\n');
	return (0);
}