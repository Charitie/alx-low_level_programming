#include "holberton.h"
#include <stdio.h>

/**
*_strstr - locates a substring
*@haystack: character
*@needle: character
*Return: pointer to the beginning of the located substring
*or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{

char *f, *c;

while (*haystack)
{
f = haystack;
c = needle;

while (*haystack && *c && *haystack == *c)
{
haystack++;
c++;
}

if (!*c)
{
return (f);
}

haystack = f + 1;

}

return (NULL);
}
