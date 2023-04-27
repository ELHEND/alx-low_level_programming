#include <stdio.h>
void first(void) __attribute__ ((constructor));
/**
 * first - prints a sentence before the main
 * function is executed
 *
 * main - prints a sentence after the  first
 */
void first(void)
{
printf("This is a different message than the original one.\n");
}
{
printf("Main function executed!\n");
return (0);
}
