#include "main.h"

/**
 * print_hex- prints a hexadecimal number
 * @number: arguments
 * @p: the printed characters at the output
 * @upper: the uppercase equivalent
 * Return: printed charcaters
 */

int print_hex(unsigned int number, int upper, int p)
{
	int hexa[100], i = 0, j;

	while (number != 0)
	{
		int rem = number % 16;

		if (rem < 10)
		{
			hexa[i] = 48 + rem;
		}
		else
		{
			if (upper)
			{
				hexa[i] = 65 + (rem - 10);
			}
			else
			{
				hexa[i] = 97 + (rem - 10);
			}
		}
		i++;
		number /= 16;
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
			_putchar(hexa[j]);
			p++;
		}
	}
	return (p);
}
