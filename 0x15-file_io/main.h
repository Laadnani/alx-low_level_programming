#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int create_file(const char *filename, char *text_content);
ssize_t _strln(const char *str);
int append_text_to_file(const char *filename, char *text_content);
int cpi(int argc, char *argv[]);
int _putchar(char s);
ssize_t read_textfile(const char *filename, size_t letters);

#endif
