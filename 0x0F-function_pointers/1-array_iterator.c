#include "function_pointers.h"

/**
 * array_iterator - ...
 * @array: ...
 * @size: ...
 * @action: ...
 * Return: ...
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL && size > 0)
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
}
