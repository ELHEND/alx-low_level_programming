#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
int m, x, n, len, f, digit;
m = 0;
x = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (m < len && f == 0)
{
if (s[m] == '-')
++x;
if (s[m] >= '0' && s[m] <= '9')
{
digit = s[m] - '0';
if (x % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[m + 1] < '0' || s[m + 1] > '9')
break;
f = 0;
}
m++;
}
if (f == 0)
return (0);
return (n);
}
/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
int sum, num, i, j, p;
sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > '9' || argv[i][j] < '0')
puts("Error");
return (1);
}
}
}
for (p = 1; p < argc; p++)
{
num = _atoi(argv[p]);
if (num >= 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}
