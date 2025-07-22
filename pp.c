#include <stdio.h>
#include "main.h"
#include <stdarg.h>

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
