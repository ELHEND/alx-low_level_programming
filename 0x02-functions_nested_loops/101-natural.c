#include "main.h"
/**
 * main - Entry point
 *
 * Description: computes the sum of all the  multiples of 3 or 5 below 1024 (excluded) 
 * 
 * Return : Always 0 (success) 
 */
int main(void)
{
int total = 0;
for (int i = 1; i < 1024; i++) {
if (i % 3 == 0 || i % 5 == 0) {
total += i;
}
}
printf("%d\n", total);
return 0;
}
