#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * pc - print a char
 * @args: the argument to print
 * Return: 1
 */

int pc(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
 * ps - print a string
 * @args: the argument to print
 * Return: 1
 */

int ps(va_list args)
{
	int index;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	for (index = 0; s[index] != '\0'; index++)
		_putchar(s[index]);
	return (index);
}

/**
 * pp - print nothing
 * @args: print nothing
 * Return: 1
 */

int pp(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * _printf - function that produces output according to a format
 * @format: format to get the right printf
 * Return: always 0
 */

int _printf(const char *format, ...)
{
	int count = 0;

	funckey checker[] = {
		{'c', pc},
		{'s', ps},
		{'%', pp},
		{'\0', NULL}
	};

	va_list parameter;

	if (format == NULL)
		return (-1);

	va_start(parameter, format);

	count = convertion(format, checker, parameter);

	va_end(parameter);

	return (count);
}
