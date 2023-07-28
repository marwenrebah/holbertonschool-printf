#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct select - connect specifier with correct print function.
 * @c: char
 * @f: required func
*/
typedef struct select
{
char *c;
int (*f)(va_list);
} selecter_t;

int print_char(va_list Project);
int print_string(va_list Project);
int print_percent(va_list Project);
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list);
int (*select_func(char ch))(va_list);
int print_decimal(va_list);
int print_percent(__attribute__((unused)) va_list);

#endif
