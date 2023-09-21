#include "main.h"

/**
 * Desc - description 
 *
 * Return: return
 */

int main(int argc, char *argv[], char **env)
{
	int i = 0;

	for (i = 0; environ[i] != NULL; i++)
	{
		printf("%d: %s\n", i, environ[i]);
	}
	return (0);
}
