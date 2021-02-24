#include "holberton.h"

/**
*factorial - factorial of a given number
*@n: integer
*Return: factorial of n
*/


int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n <= 1)
{
return (1);
}
return (n * factorial(n - 1));
}
