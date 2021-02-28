#include "holberton.h"

/**
*_memcpy - copy memory
*@dest: destination
*@src: source
*@n: integer
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

char *ptr = dest;

while (n--)
{
*dest++ = *src++;
}

return (ptr);
}
