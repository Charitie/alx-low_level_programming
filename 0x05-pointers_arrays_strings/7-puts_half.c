#include "holberton.h"

/**
*puts_half - prints half of a string
*@str: string
*Return: void
*/

void puts_half(char *str)
{
int i;
int half;

while (str[i] != '\0')
{
i++;
}

if (i % 2 == 1)
{
half = (i + 1) / 2;

while (str[half] != '\0')
{
_putchar(str[half]);
half++;
}
}
else
{
half = (i / 2);
while (str[half] != '\0')
{
_putchar(str[half]);
half++;
}
}
_putchar('\n');
}
