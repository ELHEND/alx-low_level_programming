#include "variadic_functions.h"
/**
 * print_strings - prints strings
 *
 * @separator: separator between strings
 *
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int f;
char *str;
va_list list;
va_start(list, n);
for (f = 0; f < n; f++)
{
str = va_arg(list, char *);
if (!str)
str = "(nil)";
if (!separator)
printf("%s", str);
else if (separator && f == 0)
printf("%s", str);
else
printf("%s%s", separator, str);
}

printf("\n");

va_end(list);
}
