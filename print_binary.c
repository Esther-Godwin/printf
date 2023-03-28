#include "main.h"

/**
 * print_binary - Prints a binary number
 * @args: numbers to print
 *
 * Return: Number of printed binary numbers
 */
int print_binary(va_list args)
{
	unsigned int number = va_arg(args, unsigned int);
	char *binary;
	int i, count = 0;
	int size = sizeof(int) * 8;

	if (number == 0)
		return (_putchar('0'));
	binary = malloc(size);
	if (!binary)
		return (-1);
	for (i = size - 1; i >= 0; i--)
	{
		binary[i] = (number % 2) + '0';
		number = number / 2;
	}
	for (i = 0; i < size && binary[i] == '0'; i++)
		;
	for (; i < size; i++)
	{
		_putchar(binary[i]);
		count++;
	}
	free(binary);
	return (count);
}
