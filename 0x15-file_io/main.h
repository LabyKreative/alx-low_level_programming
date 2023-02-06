#ifndef MAIN_H
#define MAIN_H
#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"

#include <elf.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(const char *s);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_elf(int elf);

#endif /* MAIN_H */
