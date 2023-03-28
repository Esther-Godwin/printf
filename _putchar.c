#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @ch: Character to write
 * Return: 0 or 1
 */
int _putchar(char ch)
{
	static int count;
	static char buffer[1024];

	if (ch == -1)
	{
		count = 0;
		return (0);
	}
	if (ch == -2 || count == 1024)
	{
		write(1, buffer, count);
		count = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buffer[count] = ch;
		count++;
		return (1);
	}

	return (0);
}
