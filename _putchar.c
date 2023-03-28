#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @ch: Character to write
 * Return: 0 or 1
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
