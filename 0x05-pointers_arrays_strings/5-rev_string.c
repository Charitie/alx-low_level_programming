#include "holberton.h"

/**
*rev_string -reverses a string
*@s: string
*Return: void
*/

void rev_string(char *s)
{

int left = 0;
int i = 0;
int j;

while (s[i] != '\0')
{
i++;
}
i--;

while (i > left)
{
j = s[i];
s[i--] = s[left];
s[left++] = j;
}
}
