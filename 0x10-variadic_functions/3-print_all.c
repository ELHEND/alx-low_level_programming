#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
va_list list;
char *str, *sep = "";
int f = 0, len = strlen(format);
va_start(list, format);
for (f; f < len; f++)
{
switch (format[f])
{
case 'c':
printf("%s%c", sep, va_arg(list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(list, double));
break;
case 's':
str = va_arg(list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
continue;
}
sep = ", ";

}
printf("\n");
va_end(list);
}

