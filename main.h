#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct convert - structurefor the symbols for functions
 * @sym: the operator
 * @f: pointer itself
 *
 * Desc - Stores all pointers for the printing functions
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _putchar(char c);
int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_string(va_list list);
int print_char(va_list list);
int print_percent(__attribute__((unused))va_list list);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int print_integer(va_list list);

#endif
