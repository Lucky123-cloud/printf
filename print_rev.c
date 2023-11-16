#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @args: number of arguements
 * @p: the printed characters at the output
 * Return: printed charcaters
 */

int print_rev(va_list args, int p)
{
	char *string = va_arg(args, char *);
	int length = 0, i;

	while (string[length])
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(string[i]);
		p++;
	}

	return (p);
}
