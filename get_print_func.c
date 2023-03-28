#include "main.h"

/**
 * get_print_func - Get print function based on specifier
 * @format: String containing the specifier
 *
 * Return: Pointer to the print function
 */
int (*get_print_func(const char *format))(va_list)
{
	int i;

	print_func func[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{"%d", print_num},
		{"%i", print_num},
		{"%b", print_binary},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);

	for (i = 0; func[i].specifier; i++)
	{
		if (format[1] == func[i].specifier[1])
			return (func[i].function);
	}
	return (NULL);
}
