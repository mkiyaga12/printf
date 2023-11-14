#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int moses(char chr);
int main(void);
int _strlen(char *s);
int put(char *chr);
int put_s(char *chr);
unsigned int _strleng(char *str);
int print_percent(va_list args, char);

#endif
