#include "main.h"

/**
 * parser - This function takes all input from main function
 *	and print out the arguments
 * @format: The string to be printed out
 * @f_list: A list of all possible functions and their parameters
 * @arg_list: List that contains all the arguments passed to the function
 *
 * Return: A count of all printed characters
 */

int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, r_val, printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);

					printed_chars += r_val;
					break;
				}
			}

			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
