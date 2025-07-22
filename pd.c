#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/**
 * pd - print a char
 * @args: the argument to print
 * Return: 1
 */

int pd(va_list args)
{
	int len;

	len = signed_num(args);
	return (len);
}
