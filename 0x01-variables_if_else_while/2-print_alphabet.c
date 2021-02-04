#include <stdio.h>
/**
*main - print alphabet in lowercase
*Description: Print lowercase using putchar and then a new line
*Return: 0
*/
int main(void)
{
char l;
for (l = 'a'; l <= 'z'; l++)
putchar(l);
putchar('\n');
return (0);
}
