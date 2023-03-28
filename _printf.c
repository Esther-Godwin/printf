#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: String containing the formats
 *
 * Return: Numbers of characters printed
 */
int _printf(const char *format, ...)
{
	char specifier[3];
	int num_output = 0, (*print_func)(char *, va_list);
	va_list args;

	if (format == NULL)
		return (-1);
	specifier[2] = '\0';
	_putchar(-1);
	va_start(args, format);
	while (format[0])
	{
		if (format[0] == '%')
		{
			print_func = get_print_func(format);
			if (print_func)
			{
				specifier[0] = '%';
				specifier[1] = format[1];
				num_output += print_func(specifier, args);
			}
			else if (format[1] != '\0')
			{
				num_output += _putchar('%');
				num_output += _putchar(format[1]);
			}
			else
			{
				num_output += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			num_output += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (num_output);
}
