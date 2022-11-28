#include "main.h"

/**
* parser - Accepts all parameters passed to the main function
* @fomart - List of all characters passed in the main function
* @f_list: List of all possible functions
* @arg_list: list containing all arguments passed in the function
*
* Return: Number of all printed 
*/

int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int i, j, val, chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					val = f_list[j].f(arg_list);
					if (val == -1)
						return (-1);
					chars += val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i +1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					chars = chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			chars++;
		}
	}
	return (chars);
}
