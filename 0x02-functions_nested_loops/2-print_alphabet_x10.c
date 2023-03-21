#include "main.h"

/**
 ** print_alphabet_x10 - prints the alphabet 10 times in lowercase
 **
 ** Return: void
 **/
void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0; i < 10; i++)
{
ch = 'a';						       
while (ch <= 'z')
{
_putchar(ch);
ch++;							
}
_putchar('\n');
}
}

