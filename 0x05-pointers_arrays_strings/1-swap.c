#include "holberton.h"

/**
*void swap_int - swaps the values of two integers
*@a: first integer
*@b: second integer
*Return: void
*/

void swap_int(int *a, int *b)
{
int i;

i = *a;
*a = *b;
*b = i;
}
