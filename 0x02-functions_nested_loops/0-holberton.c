#include "holberton.h"
/**
*main - Prints String
*Description: A program to print Holberton
*Return: 0
*/

int  main(void)
{
char c;
char s[] = "Holberton \n";
int i;

for (i = 0; i < 9; i++) 
c=s[i];
_putchar(c);

return (0);
}
