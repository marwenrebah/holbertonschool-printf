#include "main.h"
#include <stdio.h>
/**
 * printChar - prints a char
 * @c: character
 * Return: integer
*/
int printChar(char c)
{
write(1, &c, 1);
return (1);
}
/**
 * printString - prints a string
 * @s: string
 * Return: integer
*/
int printString(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
printChar(s[i]);
return (i);
}
/**
 * printDecimal - prints a decimal
 * @d: decimal
 * Return: integer
*/
int printDecimal(int d)
{
int count = 0;
char c;
int divisor = 1;
int tmp;
if (d < 0)
{
write(1, "-", 1);
count += 1;
d = -d;
}
while (d / divisor >= 10)
divisor *= 10;
while (divisor != 0)
{
tmp = d / divisor;
d = d % divisor;
c = tmp + '\0';
write(1, &c, 1);
count += 1;
divisor /= 10;
}
return (count);
}


{
    /* code */
}

}
