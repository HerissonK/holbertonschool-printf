#include "main.h"
#include <stddef.h>

/**
 * px - print a number in hexadecimal format
 * @args: Number to print
 *
 * Return: Length of the number
 **/
int px(va_list args)
{
	char *hexa;
	int count;

	hexa = itoa(va_arg(args, unsigned int), 16);

	count = printstr((hexa != NULL) ? hexa : "NULL");

	return (count);
}
