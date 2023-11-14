#include "main.h"

/**
 * print_unsigned_int - function to print unsigned integers
 * @number: numbers to be printed
 * @p: characters printed at the output
 * Return: printed charcaters
 */

int print_unsigned_int(unsigned int number, int p)
{
	int d = 0;
	unsigned int temp = number;

	do {
		d++;
		temp = temp / 10;
	} while (temp != 0);

	if (number == 0)
	{
		_putchar('0');
		p++;
	}
	else
	{
		char string[11];
		int i = 0;

		while (number != 0)
		{
			string[i] = (number % 10) + '0';
			number = number / 10;
			i++;
		}
		for (i = digits - 1; i >= 0; i--)
		{
			_putchar(string[i]);
			p++;
		}
	}
	return (p);
}
