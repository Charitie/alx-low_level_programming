#include <stdio.h>
/**
*main - Prints numbers
*Description: Prints all single digits of base 10 followed by a new line
*Return: 0
*/
int main(void)
{
int digit;

for (digit = 0; digit < 10; digit++)
printf("%d", digit);
printf("\n");
return (0);
}
