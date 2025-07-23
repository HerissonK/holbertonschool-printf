#include "main.h"

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int printstr(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);

	return (i);
}
