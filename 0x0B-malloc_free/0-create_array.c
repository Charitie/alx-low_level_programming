#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*create_array - creates an array of chars,
*and initializes it with a specific char.
*@size: unsigned integer
*@c: string
*Return: NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{

unsigned int s = 0;

char *arr;

arr = (char *) malloc(size);

if (size == 0 || arr == NULL)
{
return (NULL);
}

for (s = 0; s < size; s++)
{
arr[s] = c;
}

return (arr);
}
