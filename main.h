#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type character pointer of the specifier
 * @f: type pointer to function for the conversion specifer
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list val);
int print_char(va_list val);
int print_27(void);
int _strlenc(const char *s);
int _strlen(char *s);
int convert_integer(va_list, args);
int print_unsigned_int(va_list args);

#endif
