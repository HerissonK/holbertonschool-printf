#include "main.h"
#include <stddef.h>

/**
 * pu - print a unsigned int
 * @args: Number to print
 *
 * Return: Length of the number
 **/
int pu(va_list args)
{
	char *unsign;
	int count;

	unsign = itoa(va_arg(args, unsigned int), 10);

	count = printstr((unsign != NULL) ? unsign : "NULL");

	return (count);
}
