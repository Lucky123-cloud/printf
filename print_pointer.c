#include "main.h"

#define MAX_HEX_DIGITS 16

/**
 * print_ptr - prints a pointer
 * @args: numberof arguements
 * @p: the printed characters
 * Return: printed charcaters
 */
int print_ptr(va_list args, int p)
{
	void *ptr = va_arg(args, void*);
	unsigned long number = (unsigned long) ptr;
	int ds = 0;
	int i;
	unsigned long temp = number;
	char hex_digits[MAX_HEX_DIGITS] = "0123456789abcdef";
	char hex[MAX_HEX_DIGITS];

	while (temp != 0)
	{
		ds++;
		temp /= 16;
	}

	p = p + _putchar('0');
	p = p + _putchar('x');

	if (number == 0)
	{
		p += _putchar('0');
	}
	else
	{
		for (i = ds - 1; i >= 0; i--)
		{
			int d = number % 16;

			hex[i] = hex_digits[d];
			number /= 16;
		}
		for (i = 0; i < ds; i++)
		{
			p += _putchar(hex[i]);
		}
	}
	return (p);
}

