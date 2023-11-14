#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int convert_integer(va_list args);
int _putchar(char c);
int print_unsigned_int(va_list args);
#endif
