#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: the arguements to use
 * @p: the printed characters
 * Return: printed charcaters
 */

int printf_char(va_list args, int p)
{
	int character = va_arg(args, int);

	_putchar(character);
	return (p + 1);
}
