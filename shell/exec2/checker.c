#include "main.h"

/**
 * desc - 
 *
 * Return
 */

char *checker(char *arg)
{
	int i = 0;
	int j = 0;
	char *fullpath = _getenvir("PATH");
	char *d = ":";
	char *path[20];
	char *added = "/";
	char *checked;
	size_t len1, len2, len3;
	char * pathcopy;

	pathcopy = (char *)malloc(_strlen(fullpath) + 1);
	if (pathcopy == NULL)
	{
		return NULL;
	}
	_strcpy(pathcopy, fullpath);
	path[0] = strtok(pathcopy, d);

	while (path[i] != NULL)
	{
		i++;
		path[i] = strtok(NULL, d);
	}
	for (j = 0; j < i; j++)
	{
		len1 = _strlen(path[j]);
		len2 = _strlen(added);
		len3 = _strlen(path[0]);
		checked = (char *)malloc(len1 + len2 + len3 + 2);
		if(checked == NULL)
		{
			free(pathcopy);
			return(NULL);
		}
		_strcpy(checked,path[j]);
		_strcatcope(checked, added);
		_strcatcope(checked, arg);
		if (access(checked, X_OK) == 0)
		{
			free(pathcopy);
			return(checked);
		}
		
		if (j == i)
		{
			perror(checked);
		}
		free(checked);
	}
	len1 = 0;
	len2 = 0;
	path[20] = NULL;
return (NULL);
}
