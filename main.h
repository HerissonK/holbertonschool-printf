#ifndef MAIN_H
#define MAIN_H

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
	void (*f)(va_list);
	char spec;
} funckey;

#endif
