#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 *_strdup - copies the string given as parameter
 * @str: string to duplicate
 * Return: pointer to the copied string (Success), NULL (Error)
 */
#include <stdlib.h>

char *_strdup(char *str)
{
char *new_str;

if (str == NULL)
return (NULL);

new_str = malloc(sizeof(char) * (strlen(str) + 1));
if (new_str == NULL)
return (NULL);

strcpy(new_str, str);

return (new_str);
}

