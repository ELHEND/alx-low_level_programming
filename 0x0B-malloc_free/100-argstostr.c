#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *argstostr - concatenates all arguments of the program.
 *
 *@ac: argument count.
 *@av: pointer to array of size ac.
 *Return: NULL if ac == 0 or av == null, Pointer to new string.
 *NULL on fail.
 */

char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, position = 0;
char *str;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
total_length++;
total_length++; /* for space or newline */
}
str = malloc((total_length + 1) * sizeof(char));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[position] = av[i][j];
position++;
}
str[position] = '\n';
position++;
}
return (str);
}

