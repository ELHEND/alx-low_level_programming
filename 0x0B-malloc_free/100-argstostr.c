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
if (ac == 0 || av == NULL)

{
return (NULL);
}

int total_length = 0;
for (int i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1; /* Include space for '\n'*/
}
char *str = malloc(total_length *sizeof(char));
if (str == NULL)
{
return (NULL);
}
int position = 0;
for (int i = 0; i < ac; i++)
{
int length = strlen(av[i]);
strncpy(str + position, av[i], length);
position += length;
str[position] = '\n';
position++;
}
str[total_length - 1] = '\0'; /* Replace last '\n' with '\0'*/
return (str);
}
