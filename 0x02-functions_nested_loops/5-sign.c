#include "main.h"
/**
 *print_sign-Determines if the input numbern
 *greater, iqual or less than zero.
 *en: the input mumber as an integer.
 *
 * Return:1 is greater than zero. 0 is zero.
 * -1 is less than zero.
 */

int print_sign(int n)
{
int n;
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}

