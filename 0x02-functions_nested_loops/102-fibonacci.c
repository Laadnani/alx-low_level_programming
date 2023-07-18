#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0;
 */
int main(void)
{
	float a = 1;
	float b = 2;
	float result;
	int i;

	for (i = 0; i <= 49; i++)
	{
		printf("%.0f, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
