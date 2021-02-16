#include "holberton.h"

/**
*print_rev - prints a string, in reverse
*@s: string
*Return: void
*/

void print_rev(char *s)
{
int left = 0;
int length = 0;
int i;

for (i = 0; s[i] != '\0'; ++i)
{

length = i;

}

for (; length >= left; length--)
{

_putchar(s[length]);

}

_putchar('\n');
}

