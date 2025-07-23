#include "main.h"
#include <stdio.h>

int _strcmp(char *, char *);

/**
 * pptr - Print a number in hexadecimal format
 * @args: Number to print
 *
 * Return: Length of the number
 **/

int pptr(va_list args)
{
	char *ptr;
	int count;

	ptr = itoa(va_arg(args, unsigned long int), 16);

	if (!_strcmp(ptr, "0"))
		return (printstr("(nil)"));

	count = printstr("0x");

	if (!_strcmp(ptr, "-1"))
		count += printstr("ffffffffffffffff");
	else
		count += printstr(ptr);

	return (count);
}

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Integer
 **/
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
