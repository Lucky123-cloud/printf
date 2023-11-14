#include "main.h"
/**
  *print_binary- function to print a binary number
  *@args: number to be printed
  *Return: Always 0 (Success)
  */

int print_binary(va_list args)
{
	int x = 0, y = 0, i, j, k = 1;
	unsigned int l;
	unsigned int number = va_arg(args, unsigned int);

	for (i = 0; i < 32; i++)
	{
		l = ((k << (31 - i)) & number);
		if (l >> (31 - i))
			x = 1;
		if (x)
		{
			j = l >> (31 - i);
			_putchar(j + 48);
			y++;
		}
	}
	if (y == 0)
	{
		y++;
		_putchar('0');
	}
	return (y);
}
