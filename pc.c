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
