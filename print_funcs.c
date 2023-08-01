#include "main.h"

/**
 * print_char - prints a char.
 *@args: the char to print
 * Return: integer
*/
int print_char(va_list args)
{
char c;
c = va_arg(args, int);
_putchar(c);
return (1);
}
/**
 * print_string - prints a string
 * @args: string
 * Return: integer
*/
int print_string(va_list args)
{
char  *s;
int i = 0;
s = va_arg(args, char *);
if (!s)
s = "(null)";
while (*(s + i))
{
_putchar(*(s + i));
i++;
}
return (i);
}
/**
 * print_percent - print %
 * @args: va_list
 * Return: count
*/
int print_percent(va_list args)
{
(void)args;
_putchar('%');
return (1);
}
/**
 * print_int - print an integer
 * @args: va_list
 * Return: count
*/
int print_int(va_list args)
{
return (print_decimal(args));
}
/**
 * printBinary - prints a decimal
 * @b: int to print as binary
 * Return: count
*/
int printBinary(int b)
{
int binary = 0;
int place = 1;
int remainder;
while (b > 0)
{
remainder = b % 2;
binary += remainder *place;
place *= 10;
b /= 2;
}
return (print_decimal(binary));
}
