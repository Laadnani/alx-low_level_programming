#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0;
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long result;
	int i;

	for (i = 0; i <= 49; i++)
	{
		printf("%ld", a);
		result = a + b;
		a = b;
		b = result;
		if (i == 49)
		{
			printf('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
