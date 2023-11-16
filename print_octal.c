#include "main.h"

/**
 * print_octal - prints an octal
 * @number: number of arguements
 * @p: the printed characters atthe output
 * Return: printed charcaters
 */

int print_octal(unsigned int number, int p)
{
	int octal[100], i = 0, j;

	while (number != 0)
	{
		int rem = number % 8;

		octal[i] = 48 + rem;
		i++;
		number /= 8;
	}

	if (i == 0)
	{
		_putchar('0');
		p++;
	}
	else
	{
		for (j = i - 1; j >= 0; j--)
		{
			_putchar(octal[j]);
			p++;
		}
	}
	return (p);
}
