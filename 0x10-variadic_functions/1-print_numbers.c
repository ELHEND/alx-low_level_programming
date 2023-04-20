#include "variadic_functions.h"
/**
 * print_numbers - prints numbers given as parameters
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int f;
va_list list;
va_start(list, n);
for (f = 0; f < n; f++)
{
if (!separator)
printf("%d", va_arg(list, int));
else if (separator && f == 0)
printf("%d", va_arg(list, int));
else
printf("%s%d", separator, va_arg(list, int));
}
va_end(list);
printf("\n");
}
