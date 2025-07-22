#include <stdio.h>
#include "main.h"
#include <stdarg.h>

/** pi - print nothing
 * @args: use nothing
 * Return: 1
 */

int pi(va_list args)
{
	int len;

	len = signed_num(args);
	return (len);
}
