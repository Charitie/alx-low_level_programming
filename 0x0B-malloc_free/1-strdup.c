#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - allocated space in memory
*@str: string
*Return: pointer to a newly allocated space
*/

char *_strdup(char *str)
{

int i, j;
char *mem;

if (str == NULL)
{
return (NULL);
}

for (j = 0; str[j] != '\0'; j++)
;

mem = malloc(j * sizeof(*str) + 1);

if (mem == 0)
{
return (NULL);
}
else
{
for (i = 0; i < j; i++)
{
mem[i] = str[i];
}
}

return (mem);
}
