#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * conversion - Receives the main string and all the necessary parameters
 * to print a formated string.
 * @format: A string containing all the desired characters.
 * @checker: A list of all the posible functions.
 * @parameter: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */

int convertion(const char *format, funckey checker[], va_list parameter)
{
	int i, j, r_val, printed_chars;

	printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; checker[j].spec != NULL; j++)
			{
				if (format[i + 1] == checker[j].spec[0])
				{
					r_val = checker[j].f(parameter);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (checker[j].spec == NULL && format[i + 1] != ' ')
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
