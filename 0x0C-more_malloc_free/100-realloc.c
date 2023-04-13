#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 *
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int copy_size;
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
copy_size = old_size < new_size ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
free(ptr);
return (new_ptr);
}

