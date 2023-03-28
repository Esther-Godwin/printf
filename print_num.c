#include "main.h"

/**
 * print_signed_num - Prints a number including the sign if negative
 * @num: Number to print
 *
 * Return: Number of printed numbers
 */
int print_signed_num(int num)
{
	unsigned int unsigned_num;
	int count;

	count = count_digits(num);

	if (num < 0)
	{
		_putchar('-');
		unsigned_num = -num;
	}
	else
	{
		unsigned_num = num;
	}

	if (unsigned_num >= 10)
		print_signed_num(unsigned_num / 10);
	_putchar(unsigned_num % 10 + '0');
	return (count);
}

/**
 * print_num - Prints a number
 * @args: number to print
 *
 * Return: Number of printed numbers
 */
int print_num(va_list args)
{
	int number = va_arg(args, int);
	int count;

	count = print_signed_num(number);
	return (count);
}
