#include <stdio.h>
/**
 * main - entry point
 *
 * Return: returning 0 when successfull
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int e;
	float f;

	printf("Size of a char : %c byte(s)\n", sizeof(a));
	printf("Size of a int : %d byte(s)\n", sizeof(b));
	printf("Size of a char : %d byte(s)\n", sizeof(c));
	printf("Size of a char : %d byte(s)\n", sizeof(d));
	printf("Size of a char : %f byte(s)\n", sizeof(f));

	return (0);
}
