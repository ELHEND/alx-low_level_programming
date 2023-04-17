#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int name_len, owner_len;
if (name == NULL || owner == NULL)
return (NULL);
/* allocate memory for struct */
d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);
/* get length of name and owner */
name_len = strlen(name);
owner_len = strlen(owner);
/* allocate memory for name */
d->name = malloc(name_len + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
/* copy name to allocated memory */
strcpy(d->name, name);
/* allocate memory for owner */
d->owner = malloc(owner_len + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
/* copy owner to allocated memory */
strcpy(d->owner, owner);
/* set age */
d->age = age;
return (d);
}
