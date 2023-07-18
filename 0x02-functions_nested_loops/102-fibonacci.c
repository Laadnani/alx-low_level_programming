#include <stdio.h>
/**
 * main - entry point
 *
 * @a: first parameter of the series
 *
 * @b: second parameter of the series
 *
 * @result: the combination of both a and b
 *
 * Return: always 0;
 */
int main (void)
{
	int a = 1;
	int b = 1;
	int result;
	int i;

	for (i = 0; i <= 49; i++)
	{
		printf("%d\n", a);
		result = a + b;
		a = b;
		b = result;
	}
	return (0);
}
