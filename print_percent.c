#include "main.h"

/**
 * print_percent - Prints percent symbol
 * @format: Format to print
 * @args: arguments to print
 *
 * Return: Number of printed symbols
 */
int print_percent(char *format, va_list args)
{
	(void)format;
	(void)args;

	_putchar('%');
	return (1);
}
