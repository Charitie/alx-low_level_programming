#include "holberton.h"

/**
*rot13 - encodes a string using rot13
*@c: string
*Return: string
*/

char *rot13(char *c)
{
int i, j;
char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; j <= 51; j++)
{
if (s[j] == c[i])
{
c[i] = s1[j];
}
}
}

return (c);
}
