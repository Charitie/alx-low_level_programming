#include "holberton.h"

/**
*cap_string -  capitalizes all words of a string
*Return: string
*/

char *cap_string(char *s)
{
int i = 0;

while (s[0] != '\0')
{

if (n[0] <= 'a' && s[0] <= 'z')
{
s[0] = s[0] - 32;
}

if (s[i] == ' ' || s[i] == '.' || s[i] == '"' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
{
if (s[i + 1] >= 'a' && s[i] <= 'z')
{
s[i + 1] = s[i + 1] - 32;
}
}

i++;
}

return (s);
}
