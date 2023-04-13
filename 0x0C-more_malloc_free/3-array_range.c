#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
int *arr, l = 0, w = min;
if (min > max)
return (0);
arr = malloc((max - min + 1) * sizeof(int));
if (!arr)
return (0);
while (l <= max - min)
arr[l++] = w++;
return (arr);
}
