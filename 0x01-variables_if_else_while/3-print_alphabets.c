#include <stdio.h>
/**
*main - Prints lowercase and uppercase
*Description: Print lowercase and uppercase using putchar
*then new line
*Return: 0
*/
int main(void)
{
int alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
