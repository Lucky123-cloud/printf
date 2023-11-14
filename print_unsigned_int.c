#include "main.h"

/**
  *print_unsigned_int - function to convert an unsigned int to character
  *@args: arguments to be converted and printed
  *Return: Always 0 (Success)
  */
int print_unsigned_int(va_list args)
{
	unsigned int m = va_arg(args, unsigned int);
	int d, number, st = m % 10, e = 1, x = 1;

	m /= 10;
	number = m;
	if (st < 0)
	{
		_putchar('-');
		number = -number;
		m = -m;
		st = -st;
		x++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			e *= 10;
			number /= 10;
		}
		number = m;
		while (e > 0)
		{
			d = number / e;
			_putchar(d + '0');
			number -= (d * e);
			e *= 10;
			x++;
		}
	}
	_putchar(st + '0');
	return (x);
}
