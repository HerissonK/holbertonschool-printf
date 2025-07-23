#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int pc(va_list args);
int ps(va_list args);
int pp(va_list args);
int pi(va_list args);
int pd(va_list args);
int pb(va_list args);
int pu(va_list args);
int po(va_list args);
int px(va_list args);
int pxx(va_list args);
int signed_num(va_list args);
int print_unsigned_number(unsigned int list);
int printstr(char *str);
char *itoa(long int num, int base);

/**
 * struct funckey - struct to find the argument
 *
 * @f: parameter to use
 * @spec: comparation with the string
 */


typedef struct funckey
{
	char spec;
	int (*f)(va_list);
} funckey;

int convertion(const char *format, funckey checker[], va_list parameter);

#endif
