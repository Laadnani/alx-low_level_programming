#include "main.h"
/**
* main - Test function for positive or negative
* Return: 0
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n:", i);
}

int main(void)
{
	int i;
	i = 0;

	positive_or_negative(i);
	return (0);
}
