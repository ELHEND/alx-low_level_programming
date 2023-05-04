#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int total, po;
int l;
if (b == NULL)
return (0);
for (l = 0; b[l]; l++)
{
if (b[l] != '0' && b[l] != '1')
return (0);
}
for (po = 1, total = 0, l--; l >= 0; l--, po *= 2)
{
if (b[l] == '1')
total += po;
}
return (total);
}
