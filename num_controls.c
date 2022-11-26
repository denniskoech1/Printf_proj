#include "main.h"

/**
 * print_integer - prints out an integer
 * @list: list of all arguments
 *
 * Return: 1 when successful
 */

int print_integer(va_list list)
{
	int n, div = 1, len = 0;
	unsigned int num;

	n = va_arg(list, int);

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
