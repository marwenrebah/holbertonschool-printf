#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct select - connect specifier with correct print function.
 * @f: a function pointer to the print functions.
 * @x: the convertion specifier.
*/
typedef struct select
{
char *x;
int (*f)(va_list);
} selecter_t;

int print_char(va_list Project);
int print_string(va_list Project);
int print_percent(va_list Project);
int _printf(const char *format, ...);
int _putchar(char c);
int (*select_func(const char *C))(va_list);

#endif
