#include "main.h"
#include <stddef.h>

/**
 * po - print a unsigned octal
 * @args: Number to print
 *
 * Return: Length of the number
 **/
int po(va_list args)
{
	char *octal;
	int count;

	octal = itoa(va_arg(args, unsigned int), 8);

	count = printstr((octal != NULL) ? octal : "NULL");

	return (count);
}
