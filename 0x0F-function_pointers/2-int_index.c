#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
int m = 0;
while (m < size)
{
if (cmp(*(array + m)) != 0)
return (m);
m++;
}
return (-1);
}

