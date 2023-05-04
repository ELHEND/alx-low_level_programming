#include <stdio.h>
#include "main.h"
/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @index: index position to change
 * @n: pointer to decimal number to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int k;
unsigned int HOLD;
if (index > 64)
return (-1);
HOLD = index;
for (k = 1; HOLD > 0; k *= 2, HOLD--)
;
if ((*n >> index) & 1)
*n -= k;
return (1);
}
