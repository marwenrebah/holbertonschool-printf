#include "main.h"
/**
 * select_func - determine which print function to use
 * @ch: givenn character
 * Return: printed characters
*/
int (*select_func(char ch))(va_list args)
{
int i;
selecter_t tab[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{'d', print_decimal},
{'i', print_int},
{'\0', NULL},
};
for (i = 0; i < 5; i++)
{
if ((tab + i)->c == ch)
return ((tab + i)->f);
}
return (NULL);
}
