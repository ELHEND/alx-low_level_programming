#include <stdio.h>
#include "main.h"
/**
 * get_bit - get the value of a bit at a given index
 * @index: index starting from 0, of the bit we want to get
 * @n: number to evaluate
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int HOLD;
if (index > 64)
return (-1);
HOLD = n >> index;
return (HOLD & 1);
}
