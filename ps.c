#include <stdio.h>
#include "main.h"
#include <stdarg.h>

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
