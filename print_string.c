#include "main.h"
/**
 * print_string - Prints a string.
 * @Project: Va_list containing the string or char to print as the next element.
 * Return: The number of bytes printed
*/
int print_string(va_list Project)
{
char *str = va_arg(Project, char *);
int count = 0;
int retval;
if (!str)
str = "(null)";
while (*str)
{
retval = _putchar(*str);
if (retval == -1)
return (-1);
count++;
str++;
}
return (count);
}
