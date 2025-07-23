#include "main.h"

/**
 * pb - print a number in base 2
 * @args: Number to print in base 2
 *
 * Return: Length of the numbers in binary
 **/

int pb(va_list args)
{
	char *bina;
	int count;

	bina = itoa(va_arg(args, unsigned int), 2);

	count = printstr(bina);

	return (count);
}
