#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 *
 * @d: struct dog.
 *
 * Return: no return.
 *
 */
void print_dog(struct dog *d)
{

if (d == NULL)
{

return;

}


char age[32];

sprintf(age, "%f", d->age);

char *name = d->name != NULL ? d->name : "(nil)";

char *owner = d->owner != NULL ? d->owner : "(nil)";

puts("Name: ");

puts(name);

puts("Age: ");

puts(age);

puts("Owner: ");

puts(owner);
}
