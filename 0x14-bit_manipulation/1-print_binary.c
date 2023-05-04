#include <stdio.h>
#include "main.h"
/**
 * print_binary - print binary representation of a number
 *
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
unsigned long int t;
int shi;
if (n == 0)
{
printf("0");
return;
}
for (t = n, shi = 0; (t >>= 1) > 0; shi++)
;
for (; shi >= 0; shi--)
{
if ((n >> shi) & 1)
printf("1");
else
printf("0");
}
}
