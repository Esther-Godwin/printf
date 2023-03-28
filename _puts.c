#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout
 * @s: String to print
 *
 * Return: Number of printed characters in the string
 */
int _puts(char *s)
{
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
