#include <stdio.h>
/**
*main - Prints possible combinations of numbers
*Description: prints all possible combinations of single-digit numbers.
*Return: 0
*/
int main(void)
{
int d;

for (d = '0'; d <= '9'; d++)
putchar(d);
if (d != '9')
putchar(',');
putchar(' ');
return (0);
}
