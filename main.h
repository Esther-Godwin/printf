#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print_function - The structure of the specifier and
 * corresponding print function
 * @specifier: String indicating data type to be printed
 * @function: Corresponding print function
 */
typedef struct print_function
{
	char *specifier;
	int (*function)(va_list);
} print_func;

int _printf(const char *format, ...);
int _putchar(char ch);
int _puts(char *s);
int count_digits(int num);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_num(va_list);
int print_binary(va_list);
int (*get_print_func(const char *format))(va_list);

#endif
