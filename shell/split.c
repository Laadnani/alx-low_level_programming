#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char s[150] = "";
	char *p[150];
	char d[] = " ";
	int i = 1;
	int j = 0;

	while (argv[i] != NULL)
	{
		strcat(s, argv[i]);
		strcat(s, d);
		i++;
	}
	p[0] = strtok(s, d);
	printf("[");
	while (p[j] != NULL)
	{
		printf("%s", p[j]);
		j++;
		if (j != argc - 1)
		{
			printf(" ,");
		}
		p[j] = strtok(NULL, d);
	}
	printf("]\n");
	return (0);
}
