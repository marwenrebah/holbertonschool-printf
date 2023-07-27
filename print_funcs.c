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
