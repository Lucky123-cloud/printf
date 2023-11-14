#include "main.h"
/**
 * _printf - The main function of this program
 * @format: character string
 * Return: Printed Characters
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				count++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(args, int);

				write(1, &c, 1);
				count++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char*);
				int len = 0;

				while (str[len] != '\0')
					len++;
				write(1, str, len);
				count += len;
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
