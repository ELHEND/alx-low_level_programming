#include "main.h"
int actual_sqrt_recursion(int n , int i);
/**
 * _sqrt_recursion - returns the natural aquare root of a number
 * @n:number to calculate the square root of
 * Return:The resulting square root
 *
 *
 */

int _sqr_recursion(int n)
{

if (n < 0)
return (-1);

return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - recursion to find the natura
 *
 * square root of anumber
 * @n:number to calculate the sqaure root of
 * @m:iterator
 * Return:The resulting square root
 *
 */
int actual_sqrt_recursion(int n, int m)
{
if (m * m > n)
return (-1);
if (m * m == n)
return (m);
return (actua_sqrt_recursion(n, m + 1));
{
