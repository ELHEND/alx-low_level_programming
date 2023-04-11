#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 * Return: pointer to the new string created (Success), or NULL (Error)
 */

char *str_concat(char *s1, char *s2)
{
int len1 = s1 ? strlen(s1) : 0; // check if s1 is null
int len2 = s2 ? strlen(s2) : 0; // check if s2 is null
char *concat_str = malloc(sizeof(char) * (len1 + len2 + 1)); // allocate memory for the concatenated string

if (!concat_str) // check if memory allocation was successful
return (NULL);

if (s1)
strcpy(concat_str, s1); // copy s1 into concat_str
else
*concat_str = '\0'; // if s1 is NULL, the resulting string should be empty

if (s2)
strcpy(concat_str + len1, s2); // copy s2 into concat_str after s1
else
*(concat_str + len1) = '\0'; // if s2 is NULL, the resulting string remains as is

return (concat_str);
}

