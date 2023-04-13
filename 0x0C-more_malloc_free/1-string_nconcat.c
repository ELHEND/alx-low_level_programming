#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 *
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *h;
unsigned int size1 = 0, size2 = 0, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[size1] != '\0')
{
size1++;
}
while (s2[size2] != '\0')
{
size2++;
}
if (n > size2)
n = size2;
h = malloc((size1 + n + 1) * sizeof(char));
if (h == NULL)
return (0);
for (i = 0; i < size1; i++)
{
h[i] = s1[i];
}
for (; i < (size1 + n); i++)
{
h[i] = s2[i - size1];
}
h[i] = '\0';
return (h);
}
