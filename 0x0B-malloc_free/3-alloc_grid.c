#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
*alloc_grid - pointer to a 2 dimensional array of integers
*@width: integer
*@height: integer
*Return: null on failure
*/

int **alloc_grid(int width, int height)
{

int **tab;
int i;

if (width == 0 || height == 0)
{
return (NULL);
}

tab = (int **) malloc(height * sizeof(int *));

if (tab == 0)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
tab[i] = malloc(width * sizeof(int));
}

if (tab != NULL)
{
return (tab);
}

return (NULL);
}
