/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
/* base cases */
if (n < 0) /* negative input */
return (-1);
else if (n == 0 || n == 1) /* square root is itself */
return (n);

/*
 * recursive case:
 * we check each number from 1 to n/2,
 * trying to find a number whose square equals
 */
int i;
for (i = 1; i <= n / 2; i++)
{
if (i * i == n) /* square found */
return (i);
}

/* if we haven't found a square, recurse with n-1 */
int sqrt = _sqrt_recursion(n - 1);
if (sqrt == -1) /* no square found */
return (-1);
else /* found square */
return (sqrt);
}

