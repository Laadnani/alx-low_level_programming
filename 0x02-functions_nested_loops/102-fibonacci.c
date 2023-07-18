#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0;
 */
int main(void)
{
	long long a = 1;
	long long b = 2;
	long long result;
	int i;

	for (i = 0; i <= 49; i++)
	{
		printf("%lld, ", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
