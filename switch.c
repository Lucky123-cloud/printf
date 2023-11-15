#include "main.h"

/**
 * all_cases - function to select the correct specifier
 * @args: number of arguements
 * @p: the characters printed at the output
 * @format: the format specifier
 * Return: printed charcaters
 */

int all_cases(const char *format, va_list args, int p)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			p = print_int(args, p);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			p++;
			break;
		case 's':
			p = print_string(args, p);
			break;
		case '%':
			_putchar('%');
			p++;
			break;
		case 'b':
			p = print_binary(va_arg(args, unsigned int), p);
			break;
		default:
			break;

	}
	return (p);
}
