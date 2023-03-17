#include <stdio.h>
/**
 * main - Entry point
 * Description 'print alphabets except q and e'
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');

return (0);
}
