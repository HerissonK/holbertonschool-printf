#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * pc - print a char
 * @args: the argument to print
 */

void pc(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
}

/**
 * ps - print a string
 * @args: the argument to print
 */

void ps(va_list args)
{
	char *s = va_arg(args, char*);

	while (*s)
		_putchar(*s++);
}

/**
 * pp - print nothing
 * @args: print nothing
 */

void pp(va_list args)
{
	(void)args;
	_putchar('%');
}

/**
 * _printf - function that produces output according to a format
 * @format: format to get the right printf
 * Return: always 0
 */

int _printf(const char *format, ...)
{
	va_list parameter;

	int i = 0;

	funckey checker[3] = {
		{pc, 'c'},
		{ps, 's'},
		{pp, '%'}
	};
	va_start(parameter, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;

			for (i = 0; i < 3; i++)
			{
				if (checker[i].spec == *format)
				{
					checker[i].f(parameter);
					break;
				}
			}
			if (i == 3)
			{
				_putchar('%');
				_putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
	}
	va_end(parameter);
	return (0);
}
