#include "holberton.h"

/**
*_memcpy - copies memory area
*@dest: destination
*@src: source
*@n: integer
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;

while (n--)
{
*dest++ = *src++;
}

return (p);
}
