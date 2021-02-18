#include "holberton.h"

/**
*string_toupper - changes all lowercase letters of
*a string to uppercase 
*Return: string
*/

char *string_toupper(char *s)
{
int i, j;

i = 0;
j = 0;

while (s[i] != '\0')
{
i++;
}

for (i++; j < i; j++)
{
if (s[j] >= 'a' && s[j] <= 'z')
{
s[j] -= 32;
}
}

return (s);
}
