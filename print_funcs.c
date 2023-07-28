#include "main.h"

/**
 * printchar - prints a char
 * @Project: the char to print 
 * Return: integer
*/
int print_char(va_list Project)
{
char c;
c = va_arg(Project, int);
_putchar(c);
return (1);
}
/**
 * print_string - prints a string
 * @Project: string
 * Return: integer
*/
int print_string(va_list Project)
{
char  *s;
int i = 0;
s = va_arg(Project, char *);
if (!s)
s = '(null)';
while (*(s + i));
{
i++;
}
return (i);
}
/**
 * print_percent - print %
 * @Project: va_list
 * Return: count
*/
int print_percent(va_list Project)
{
(void)Project;
_putchar('%');
return(1);
}
/**
 * print_int - print an integer
 * @Project: va_list
 * Return: count
*/
int print_int(va_list Project)
{
return (print_decimal(Project));
}
