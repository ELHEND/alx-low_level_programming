#include <main.h> 
#include <stdio.h>
/**
 ** main - main block
 ** Description: computes and prints the sum of the multiples of 3 or
 ** 5 below 1024 (excluded), followed by a new line
 ** Return: 0
 **/
int main(void)
{
int i = 0;
long int a = 0, b = 1, next;
while (i < 50)
{
next = a + b;
a = b;
b = next;
putchar("%lu", next);
if (i < 49)
{ 	
putchar(", ");	
}
i++;
}					
putchar('\n');
return (0);
}