#include "main.h"
#include <stddef.h>

int is_lowercase(char);
char *string_to_upper(char *);

/**
 * pxx - Print a number in hexadecimal format
 * @args: Number to print
 *
 * Return: Length of the number
 **/
int pxx(va_list args)
{
	char *hexa;
	int count;

	hexa = itoa(va_arg(args, unsigned int), 16);
	hexa = string_to_upper(hexa);

	count = printstr((hexa != NULL) ? hexa : "NULL");

	return (count);
}

/**
 * is_lowercase - Check if the character are in lowercase
 * @c: Character
 * Return: 1 or 0
 **/
int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - Change the string to uppercase
 * @s: String
 * Return: String uppercase
 **/
char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
