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
/** pp - print nothing
 * @args: use nothing
 * Return: 1
 */

int pp(va_list args)
{
        (void)args;
        _putchar('%');
        return (1);
}
