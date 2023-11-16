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
		case 'X':
		case 'x':
			p = print_hex(va_arg(args, unsigned int), p, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			p = print_octal(va_arg(args, unsigned int), p);
			break;
		case 'u':
			p = print_unsigned_int(va_arg(args, unsigned int), p);
			break;
		case 'r':
			p = print_rev(args, p);
			break;
		case 'p':
			p = print_ptr(args, p);
			break;
		default:
			break;

	}
	return (p);
}
