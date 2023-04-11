#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * strtow - split a string into words
 * @str: input string to split
 * Return: pointer to array of strings
 */

int count_words(char *str)
{
int count = 0;
int is_word = 0;
while (*str)
{
if (*str == ' ')
{
is_word = 0;
}
else if (!is_word)
{
is_word = 1;
count++;
}
str++;
}
return (count);
}
char **strtow(char *str)
{
int i = 0, j = 0;
int word_count = count_words(str);
char **words = malloc((word_count + 1) * sizeof(char *));
if (!words)
{
return (NULL);
}
while (*str && i < word_count)
{
if (*str == ' ')
{
str++;
continue;
}
j = 0;
while (str[j] != ' ' && str[j] != '\0')
{
j++;
}
words[i] = malloc(j + 1);
if (!words[i])
{
return (NULL);
}
strncpy(words[i], str, j);
words[i][j] = '\0';
str += j;
i++;
}
words[i] = NULL;
return (words);
}

