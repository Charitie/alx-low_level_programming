#include <stdio.h>
/**
*main - Prints numbers
*Description: prints the numbers from 00 to 99.
*Return: 0
*/
int main(void)
{
int i, j;

for (i = '0'; i <= '9'; i++)
for (j = '0'; j <= '9'; j++)
putchar(j);
putchar(i);
putchar(',');
putchar(' ');
return (0);
}
