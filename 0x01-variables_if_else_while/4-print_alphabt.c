#include <stdio.h>
/**
*main - Don't print q & e
*Description: Print all letters except q and e using putchar
*then a new line
*Return: 0
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
