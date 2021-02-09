#include "holberton.h"
/**
* _abs - computes the absolute value of an integer
* @i: integer to check
*Return: i
*/
int _abs(int i)
{
if (i < 0)
i *= -1;
return (i);
}
