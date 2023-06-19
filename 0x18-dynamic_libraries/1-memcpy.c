#include "main.h"
/**
 *  * _memcpy - function copies @n bytes from memory area @src
 *   * to memory area @dest
 *    * @src: bytes from memory area
 *    * @dest: to memory area
 *    * @n: function copies
 *       * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	while (m < n)
	{
		dest[m] = src[m];
		m++;
	}
	return (dest);
}
