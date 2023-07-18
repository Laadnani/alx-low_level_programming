#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0;
 */
int main(void)
{
	signed float a = 1;
	signed float b = 2;
	signed float result;
	int i;

	for (i = 0; i <= 49; i++)
	{
		printf("%.0f, ", signed  a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
