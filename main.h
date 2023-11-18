#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
unsigned int _strlen(char *str);
void print_buf(char buf[], int *buf_ind);

#endif
