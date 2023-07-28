#include "main.h"
/**
 * _printf - outputs a string
 * @format: input string containg arguments
 * Return: integer
*/
int _printf(const char *format, ...)
{
va_list Project;
int (*print_func)(va_list);
int count = 0;
const char *p;
va_start(Project, format);
if (!fomrat || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (p = format; *p != '\0'; p++)
{
if (*p == '%')
{
p++;
if (*p == '%')
{
count += _putchar('%');
continue;
}
print_func = select_func(*p);
if (print_func)
count += print_func(Project);
else
count += _printf("%%%c", *p);
}
else
count += _putchar(*p);
}
va_end(Project);
return (count);
}
