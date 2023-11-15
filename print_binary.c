#include "main.h"

/**
 * print_binary - prints a binary number
 * @num: number arguements
 * @p: the printed characters
 * Return: printed charcaters
 */

int print_binary(unsigned int num, int p)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		p++;
		return (p);
	}

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar('0' + binary[i]);
		p++;
	}

	return (p);
}
