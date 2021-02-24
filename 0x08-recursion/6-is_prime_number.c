#include "holberton.h"

/**
*_is_prime - find a prime
*@i: integer
*@j: integer
*Return: boolean
*/

int _is_prime(int i, int j)
{

if (i == 1)
{
return (1);
}

if (j % i == 0)
{
return (0);
}

return (_is_prime(j, i - 1));
}

/**
*is_prime_number - checks for  prime number
*@n: integer
*Return:  returns 1 if the input integer is a prime number,
*otherwise return 0
*/

int is_prime_number(int n)
{

if (n < 3)
{
return (0);
}

return (_is_prime(n, n - 1));
}
