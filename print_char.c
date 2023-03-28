#include "main.h"

/**
 * print_char - Prints a character
 * @format: format to print
 * @args: Character to print
 *
 * Return: Number of printed characters
 */
int print_char(char __attribute__((unused)) *format, va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
