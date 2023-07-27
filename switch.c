#include "main.h"
/**
 * checkFormat - chekcs a format
 * @formatChar: char
 * @ptr: ptr
 * @i: i
 * Return: integer
*/
int checkFormat(va_list ptr, char formatChar, int *i)
{
switch (formatChar)
{
case 's':
(*i)++;
return (print_string(ptr));
case 'c':
(*i)++;
return (print_char(ptr));
case '%':
return (print_percent(ptr));
case '\0':
return (-1);
default:
return (print_char(ptr));
}
return (0);
}
