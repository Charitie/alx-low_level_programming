#include "holberton.h"
#include <stdio.h>

/**
*main - prints all arguments it receives
*@argc: argument count
*@argv: argument vector
*Return: 0
*/

int main(int argc, char *argv[])
{

int total;

for (total = 0; total < argc; total++)
printf("%s\n", argv[total]);

return (0);
}
