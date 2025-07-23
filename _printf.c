#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/** _printf - function that produces output according to a format
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
		{'i', pi},
		{'d', pd},
		{'b', pb},
		{'u', pu},
		{'o', po},
		{'x', px},
		{'X', pxx},
		{'p', pptr},
		{'\0', NULL}
	};

	va_list parameter;

	if (format == NULL)
		return (-1);

	va_start(parameter, format);

	count = convertion(format, checker, parameter);

	_putchar(-1);

	va_end(parameter);

	return (count);
}
