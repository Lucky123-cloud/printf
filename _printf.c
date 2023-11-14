#include "main.h"

/**
 * _printf - function that prints char on the console
 * @format: character strings
 * Return: the lenghth of the string
 */

int _printf(const char * const format, ...)
{
	convert_match cl[] = {
		{"%s", print_string}, {"%c", print_char}, {"%%", print_27}
	};

	va_list args;
	int i = 0, ci, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

ProcessFormat:
		while (format[i] != '\0')
		{
			ci = 13;
			while (ci >= 0)
			{
				if (cl[ci].id[0] == format[i] && cl[ci].id[1] == format[i + 1])
				{
					len += cl[ci].f(args);
					i = i + 2;
					goto ProcessFormat;
				}
				ci--;
			}
			_putchar(format[i]);
			len++;
			i++;
			}
		va_end(args);
	return (len);
	}
