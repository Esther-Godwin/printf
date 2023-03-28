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
	int (*function)(char *format, va_list);
} print_func;

int _printf(const char *format, ...);
int _putchar(char ch);
int _puts(char *s);
int count_digits(int num);
int print_char(char *format, va_list);
int print_string(char *format, va_list);
int print_percent(char *format, va_list);
int print_num(char *format, va_list);
int (*get_print_func(const char *format))(char *format, va_list);

#endif
