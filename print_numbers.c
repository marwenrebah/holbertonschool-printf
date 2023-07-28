#include "main.h"
/**
 * print_numbers - prints the number
 * depending on its sign
 * @n: the given nubmer to print
* Return: count
*/
int print_numbers(int n)
{
int i, k = 0, j = 1, count = 0, f = n;
while (f /= 10)
k++;
for (i = 0; i < k; i++)
j *= 10;
for (i = 0; i < k + 1; i++)
{
_putchar((n / j) +'0');
count++;
n %= j;
j /= 10;
}
return (count);
}
