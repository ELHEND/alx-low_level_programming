#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - split a string into words
 * @str: input string to split
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
char **words = NULL;
int count = 0, i = 0;

if (str == NULL || *str == '\0')
return (NULL);
char *token = strtok(str, " ");
while (token != NULL)
{

count++;
token = strtok(NULL, " ");
}
words = malloc(sizeof(char *) * (count + 1));
if (words == NULL)
return (NULL);
token = strtok(str, " ");
while (token != NULL)
{
words[i] = strdup(token);
if (words[i] == NULL)
{
for (int j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}
i++;
token = strtok(NULL, " ");
}
words[count] = NULL;
return (words);
}

