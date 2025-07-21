#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct funckey - struct to find the argument
 *
 * @f: parameter to use
 * @spec: comparation with the string
 */


typedef struct funckey
{
	char *spec;
	int (*f)(va_list);
} funckey;

int convertion(const char *format, funckey checker[], va_list parameter);

#endif
