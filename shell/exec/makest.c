#include "main.h"

/**
 *
 * desc - 
 * Redult
 */
extern char **environ;

char main()
{
	int i = 0;
	int j = 0;
	char *fullpath = getenv("PATH");
	char *d = ":";
	char *path[20];
	char *comm = "ls";
	char *added = "/";
	char *checked;
	size_t len1, len2;

	printf("%s\n", fullpath);
	path[0] = strtok(fullpath, d);

	while (path[i] != NULL)
	{
		i++;
		path[i] = strtok(NULL, d);
	}
	for (j = 0; j < i; j++)
	{
		len1 = strlen(path[j]);
		len2 = strlen(added);
		checked = (char *)malloc(len1 + len2 + 1);

		if(checked == NULL)
		{
			perror(checked);
			exit(-1);
		}
		strcpy(checked,path[j]);
		strcat(checked, added);
		strcat(checked, comm);
		if (access(checked, X_OK) == 0)
		{
			return(checked);
			free(checked);
		}
		free(checked);
	}
	if (j == i)
	{
		perror(checked);
	}

	return (NULL);
}
