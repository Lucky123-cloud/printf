#include "main.h"

/**
 * print_int - function that print integer numbers
 * @args: number arguements
 * @p: the number of printed characters
 * Return: number of printed characters
 */

int print_int(va_list args, int p)
{
	int number = va_arg(args, int);
	int ds = 0;
	int temp = number;
	int d;

	if (number < 0)
	{
		p = p + _putchar('-');
		number = -number;

		temp = number;
	}

	do {
		ds++;
		temp = temp / 10;
	} while (temp != 0);

	while (ds > 0)
	{
		int power = 1;
		int i;

		for (i = 1; i < ds; i++)
		{
			power = power * 10;
		}
		digit = number / power;
		p += _putchar(d + '0');
		number -= d * power;
		ds--;
	}
	return (p);
}
