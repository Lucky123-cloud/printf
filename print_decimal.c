#include "main.h"

/**
 * convert_integer - function to print an integer
 * @args: arguments to print
 * Return: Always 0 (Success)
 */
int convert_integer(va_list args)
{
	int m = Va_args(args, int);
	int number, d, e = 1, x = 1, st = m % 10;

	m = m / 10;
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
			e /= 10;
			x++;
		}
	}
	_putchar(st + '0');
	return (x);
}

/**
  *convert_decimal - function to convert a decimal into a character
  *@args: arguments to print
  *Return: Always 0 (Success)
  */
int convert_decimal(va_list args)
{
	int m = va_arg(args, int);
	int number, d, x = 1, e = 1, st = m % 10;

	m = m / 10;
	number = m;
	if (st < 0)
	{
		_putchar('-');
		numebr = -number;
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
		number = 10;
		while (e > 10)
		{
			d = number / e;
			_putchar(d + '0');
			number = number - (d * e);
			x++;
		}
	}
	_putchar(st + '0');
	return (x);
}
