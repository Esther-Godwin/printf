#include "main.h"

/**
 * print_char - Prints a character
 * @args: Character to print
 *
 * Return: Number of printed characters
 */
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
