#include "main.h"
/**
 * select_func - determine which print function to use.
 * @C: identifies the type of the variable to print.
 * Return: pointer to the matching print function.
*/
int (*select_func(const char *C))(va_list)
{
int i;
selecter_t types[] = {
{"s", print_string},
{"c", print_char},
{"%", print_percent},
{"d", print_decimal},
{"i", print_integer},
{NULL, NULL},
};
for (i = 0; types[i].x; i++)
{
if (*C == types[i].x[0])
return (types[i].f);
}
return (NULL);
}
