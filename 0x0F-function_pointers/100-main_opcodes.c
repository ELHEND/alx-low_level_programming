#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int bytes, m;
char *ar;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
ar = (char *)main;
for (m = 0; m < bytes; m++)
{
if (m == bytes - 1)
{
printf("%02hhx\n", ar[m]);
break;
}
printf("%02hhx ", ar[m]);
}
return (0);
}
