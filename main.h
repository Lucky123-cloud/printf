#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int print_rev(va_list args, int p);
int _putchar(char character);
int print_char(va_list args, int p);
int print_string(va_list args, int p);
int print_int(va_list args, int p);
int all_cases(const char *format, va_list args, int p);
int _printf(const char *format, ...);
int print_unsigned_int(unsigned int number, int p);
int print_binary(unsigned int number, int p);
int print_ptr(va_list args, int p);
int print_octal(unsigned int number, int p);
int print_hex(unsigned int number, int upper, int p);

#endif
