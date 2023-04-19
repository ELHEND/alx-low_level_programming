#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\nUsage: %s <number of bytes>\n", argv[0]);
return (1);
}
int bytes = atoi(argv[1]);
if (bytes <= 0)
{
printf("Error\nNumber of bytes must be positive\n");
return (1);
}
unsigned char *code = (unsigned char *)malloc(bytes);
if (code == NULL)
{
printf("Error\nFailed to allocate memory\n");
return (1);
}
memcpy(code, (unsigned char *)main, bytes);
for (int i = 0; i < bytes; i++)
{
printf("%02x ", code[i]);
}
printf("\n");
free(code);
return (0);
}

