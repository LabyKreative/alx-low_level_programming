#ifndef FUNCT_H
#define FUNCT_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);
#include <stdio.h>
#include <stdlib.h>

#endif/*FUNC_H*/
