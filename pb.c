#include "main.h"

/**
 * print_binary - Print a number in base 2
 * @list: Number to print in base 2
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
