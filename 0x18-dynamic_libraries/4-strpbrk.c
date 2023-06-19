#include "main.h"
#include <stddef.h>
/**
 *  * _strpbrk - function that searches a string for any of a set of bytes
 *   * @s:first occurrence in the string
 *    * @accept: matches one of the bytes, or @NULL if no such byte
 *     * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
				return (s);
		}
		s++;
	}
	return (NULL);
}
