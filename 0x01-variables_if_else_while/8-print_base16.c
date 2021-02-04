#include <stdio.h>
/**
*main - prints numbers of base 16
*Description: prints all the numbers of base 16 in lowercase,
*followed by a new line.
*Return: 0
*/
int main(void)
{
int num;
char lowercase;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (lowercase = 'a'; lowercase <= 'f'; lowercase++)
{
putchar(lowercase);
}
putchar('\n');
return (0);
}
