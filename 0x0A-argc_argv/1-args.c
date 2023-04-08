#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed to the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int num_args = 0;

while (*++argv)
{

num_args++;
}
printf("%d\n", num_args);
return (0);
}

