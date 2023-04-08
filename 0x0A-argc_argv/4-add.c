#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - check if a string contains only digits
 * @s: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */
int is_digit(char *s)
{
int m;

for (m = 0; s[m]; m++)
if (s[m] < '0' || s[m] > '9')
return (0);
return (1);
}
/**
 * main - Entry point. Adds positive numbers passed as arguments.
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 if the program ran successfully, 1 otherwise
 */
int main(int argc, char **argv)
{
int sum = 0;
int m;

for (m = 1; m < argc; m++)
{
if (!is_digit(argv[m]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[m]);
}
printf("%d\n", sum);

return (0);
}
