#include "holberton.h"
#include <stdio.h>

/**
*_strcat - concatenates two strings
*@dest: string
*@src: string
*Return: pointer to dest
*/

char *_strcat(char *dest, char *src)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
continue;
}

for (i = 0; src[j] != '\0'; j++)
{
dest[i] += src[j];
i++;
}

dest += '\0';

return (dest);
}
