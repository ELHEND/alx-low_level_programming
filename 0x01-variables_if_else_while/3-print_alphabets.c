#include <stdio.h>
/**
 ** main -Entry point
 ** Description: 'print alphabets lowercase and uppercase'
 ** Return: always 0
 **/
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
putchar(i);
for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');
return (0);
}
