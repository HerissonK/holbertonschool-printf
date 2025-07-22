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
