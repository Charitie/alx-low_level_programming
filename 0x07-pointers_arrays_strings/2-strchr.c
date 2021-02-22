#include "holberton.h"
#include <stdio.h>

/**
*_strchr - locates a character in a string
*@s: character
*@c: character
*Return: pointer to the first occurrence
* of the character c in the string s
*/

char *_strchr(char *s, char c)
{

while (*s)
{
if (c == *s)
{
return (s);
}
s++;
}

if (!c)
{
return (s);
}

return (NULL);
}
