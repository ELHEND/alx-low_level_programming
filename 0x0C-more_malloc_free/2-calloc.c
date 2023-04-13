#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 *
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)

{
s[k] = b;
}
return (s);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *o;
if (nmemb == 0 || size == 0)
{
return (NULL);

}
o = malloc(nmemb * size);
if (o == NULL)
{
return (NULL);
}
_memset(o, 0, (nmemb * size));
return (o);
}
