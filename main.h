#ifndef MAIN_H
#define MAIN_H
#include "limits.h"
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct select - connect specifier with correct print function
 * @c: char
 * @f: required func
*/
typedef struct select
{
char c;
int (*f)(va_list);
} selecter_t;
int print_char(va_list);
int print_string(va_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_int(va_list);
int (*select_func(const char ch))(va_list);
int print_decimal(va_list);
int print_percent(__attribute__ ((unused)) va_list);

#endif
