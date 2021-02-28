#include "holberton.h"

/**
*_memset - memory
*@s: pointer
*@b: character
*@n: integer
*Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

for (i = 0; n > 0; i++, n--)
s[i] = b;

return (s);
}
