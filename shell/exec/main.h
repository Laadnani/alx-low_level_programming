#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#define BUFFER 1024
int split_command(char *str, char **err);
extern char **environ;
typedef struct path 
{
	char *key;
	char *value;
	struct path *next;
} path;
#endif
