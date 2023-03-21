#include <unistd.h> 
/**
 * Description : _putchar.c function to print single character.
 *
 * c is the character to bassed as aparmeter to be printed
 *
 */
void _putchar(char c) 
{ 
write(1, &c, 1);
} 
