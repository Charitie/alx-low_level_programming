#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strlen - check the length of string
*@s: string
*Return: length of s
*/

int _strlen(char *s)
{

int len;

for (len = 0; s[len] != '\0'; len++)
;

return (len);
}

/**
*str_concat - concatenates two strings
*@s1: string
*@s2: string
*Return: pointer or NULL
*/

char *str_concat(char *s1, char *s2)
{

int len1, len2, i;
char *mem;

if (s1 == NULL)
{
s1 = '\0';
}

if (s2 == NULL)
{
s2 = '\0';
}

len1 = _strlen(s1);
len2 = _strlen(s2);
mem = malloc((len1 + len2) *sizeof(char) + 1);

if (mem == 0)
{
return (0);
}

for (i = 0; i <= len1 + len2; i++)
{
if (i < len1)
{
mem[i] = s1[i];
}
else
{
mem[i] = s2[i - len1];
}
}

mem[i] = '\0';

return (mem);
}
