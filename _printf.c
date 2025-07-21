#include <stdio.h>
#include "main.h"
#include <stdarg.h>

void pc(char c)
{
	_putchar(c);
}

void ps(char *s)
{
	while (*s)
	{
		_putchar(*s++);
	}
}

void pp(void)
{
	_putchar('%');
}

/**
 * _printf - Entry point
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	const char *pointer;
	va_list parameter;
	unsigned int i;
	int j;


	funckey checker[3] = {
		{pc, 'c'}, {ps, 's'}, {pp, '%'}
	}
	va_start parameter
		while (format != NULL && *pointeur)
		{
			if (checker[i].spec == *pointeur)
			{
				if (j)
				{
					j = 1;
				}
				checker[i].f(parameter);
				pointeur++
				i = -1;
			}
			i++;
			pointeur += i / 3;
			i %= 3:
		}
	va_end(parameter)
}
