#include "holberton.h"

/**
* print_line - draws a straight line in the terminal
* @n: character to check
* Return: 0.
*/

void print_line(int n)
{
int i;

if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
}
_putchar('\n');
}
