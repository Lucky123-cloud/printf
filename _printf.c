#include "main.h"
/**
    *_printf - function that works like printf
    *@format: arguments the function takes
    *Return: Always 0 (Success)
    */
int _printf(const char *format, ...)
{	int char_output = 0;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			char_output++;
		}
		else
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
				write(1, format, 1);
				char_output++;
		else if (*format == 'c')
		char c = va_arg(args, int);

			write(1, &c, 1);
			char_output++;
		else if (*format == 's')
			char *str = va_arg(args, char*);
		int len = 0;

		while (str[len] != '\0')
		{
			len++;
		write(1, str, len);
		char_output++;
		}
		format++;
	}
va_end(args);
return (char_output);
}
