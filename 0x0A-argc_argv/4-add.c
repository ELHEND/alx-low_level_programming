#include <stdio.h>
#include "main.h"
/**
 * is_positive_number - checks if a string represents a positive number
 * @s: the string to check
 *
 * Return: 1 if s is a positive number, 0 otherwise
 */
int is_positive_number(const char *s)
{
while (*s != '\0')
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * main - adds positive numbers passed as command-line arguments
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: 0 if successful, 1 if there was an error
 */
int main(int argc, char **argv)
{
int sum = 0;
for (int i = 1; i < argc; i++)
{
if (!is_positive_number(argv[i]))
{
printf("Error\n");

return (1);

}

sum += atoi(argv[i]);

}
printf("%d\n", sum);
return (0);
}

