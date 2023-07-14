#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: return 0 when successfull
 * */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d in positive",n);
	}
	else if (n < 0)
	{
		printf("%d is negative",n);
	}
	else
	{
		printf("%d is zero",n);
	}
	return (0);
}