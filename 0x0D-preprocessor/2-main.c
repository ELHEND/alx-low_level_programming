#include <stdio.h>
#include <libgen.h>
/**
 * main - prints the name of the file
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s\n", basename(__FILE__));
return (0);
}
