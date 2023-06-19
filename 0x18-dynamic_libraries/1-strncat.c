#include "main.h"
/**
 *  * _strncat - concatenates two strings
 *  * @n: The length of int
 *   * @src: The source of strings
 *    * @dest: The destination of the string
 *      * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{

	int m, j;

	for (m = 0; dest[m] != '\0'; m++)
	{
		continue;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[m + j] = src[j];
	}
	dest[m + j] = '\0';
	return (dest);
}
