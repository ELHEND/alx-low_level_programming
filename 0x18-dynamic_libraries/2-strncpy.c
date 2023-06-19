#include "main.h"
/**
 *  * _strncpy - function that copies a string
 *   * @src: The source of strings
 *    * @dest: The destination of the string
 *     * @n: The length of int
 *      * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && *(src + m); m++)
	{
		*(dest + m) = *(src + m);
	}

	for (; m < n; m++)

	{
		*(dest + m) = '\0';
	}
	return (dest);
}
