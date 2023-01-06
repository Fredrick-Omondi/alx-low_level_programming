#include "main.h"

/**
 * helper - Finds the square root of two numbers
 * @b: The number
 * @c: The number to test for the square root of @b
 * Return: square root
 */

int helper(int b, int c)
{
if (c * c > b)
return (-1);
else if (c * c == b)
return (c);
else
return (helper(b, c + 1));
return (1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to return the square root of
 * Return: the square root of @n
 */

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (helper(n, 1));
}
