#include "main.h"
#include <stdio.h>
/**
 * print_char - Prints a char.
 * @List: Va_list containing the char to print as the next element.
 * Return: The number of bytes printed.
*/
int print_char(va_list Project)
{
char c = va_arg(Project, int);
int count = 0, retval;
retval = _putchar(c);
if (retval == -1)
return (-1);
count++;
return (count);
}
