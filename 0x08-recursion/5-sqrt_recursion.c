#include "holberton.h"

/**
*isSqrt - helper function
*@n: interger
*@i: integer
*Return: natural square root of a number
*/

int isSqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}

if (i * i == n)
{
return (i);
}

return (isSqrt(n, i + 1));
}

/**
*_sqrt_recursion - natural square root of a number
*@n: interger
*Return: natural square root of a number
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (isSqrt(n, 1));
}
