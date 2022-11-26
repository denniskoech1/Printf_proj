#include "main.h"

/**
 * print_char - prints out a character
 * @list: list of all provided arguments
 *
 * Return: 0 when successful
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (0);
}

/**
 * print_string - prints out a string
 * @list: list of all provided arguments
 *
 * Return: Number of printed characters
 */

int print_string(va_list list)
{
	int i;
	char *string;

	string = va_arg(list, char *);
	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i] != '\0'; i++)
		_putchar(string[i]);

	return (i);
}

/**
 * print_percent - prints out % symbol
 * @list: list of all provided arguments
 *
 * Return: 0 when successful
 */

int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (0);
}
