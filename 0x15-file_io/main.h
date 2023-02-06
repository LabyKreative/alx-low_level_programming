#ifndef MAIN_H
#define MAIN_H
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(const char *s);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
