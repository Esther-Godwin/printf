#include "main.h"

/**
 * print_string - Prints string
 * @format: Format to print
 * @args: Strings to print
 *
 * Return: Number of printed string
 */
int print_string(char __attribute__((unused)) *format, va_list args)
{
	char *s = va_arg(args, char *);
	int count;

	if (s == NULL)
		s = "(null)";
	count = _puts(s);
	return (count);
}
