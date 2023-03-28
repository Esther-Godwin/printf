#include "main.h"

/**
 * print_string - Prints string
 * @args: Strings to print
 *
 * Return: Number of printed string
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count;

	if (s == NULL)
		s = "(null)";
	count = _puts(s);
	return (count);
}
