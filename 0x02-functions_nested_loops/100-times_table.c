#include<main.h>
/**
 ** main - Entry point
 **
 ** Description: print all possible different
 **           combinations of two digits.
 **
 ** Return: Always 0 (Success)
 **/
int r;
int n;
for(int i = 0; i <= 9; i++) 
{
for(int j = 0; j <= 9; j++)
{
r = i * j;		            
if(j == 0)
{
putchar(r +'0');
putchar(',');
}
else if(j > 0 && r <= 9){
putchar(' ');
putchar(' ');
putchar(r+'0');
if(j != 9) 
} 
putchar(',');
}
}
else
{
n = r % 10;
r = r / 10;
putchar(' ');
putchar(r+'0');
putchar(n+'0');
if(j != 9){
putchar(',');
}
}
}
putchar('\n');
}
