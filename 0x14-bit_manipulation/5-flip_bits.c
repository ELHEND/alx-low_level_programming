#include <stdio.h>
#include "main.h"
/**
 * flip_bits - flip bits to convert one number to another number
 * @m: second number to convert to
 * @n: first number
 * Return: number of bits that was needed to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int dif;
int count;
dif = n ^ m;
count = 0;
while (dif)
{
count++;
dif &= (dif - 1);
}
return (count);
}

