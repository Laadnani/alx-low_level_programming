#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0;
 */
int main(void)
{
	long float a = 1;
	long float b = 2;
	long float result;
	int i;

	for (i = 0; i <= 49; i++)
	{
		printf("%.0lf, ", signed  a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
