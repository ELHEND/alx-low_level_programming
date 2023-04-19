#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - ....
 * @array: ....
 * @size: ....
 * @action: ....
 * Return: ....
 */
terator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL && size > 0)
{
for (size_t m = 0; m < size; m++)
{
action(array[m]);
}
}
}
