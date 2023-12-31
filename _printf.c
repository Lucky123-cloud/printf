#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: format string
 */

int _printf(const char *format, ...)
{
	int p = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			p = all_cases(format, args, p);
			format++;
		}
		else
		{
			_putchar(*format);
			p++;
			format++;
		}
	}
	va_end(args);
	return (p);
}
