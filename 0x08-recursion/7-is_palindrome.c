#include "holberton.h"

/**
*_strlen_recursion - length of string
*@s: character
*Return: length of s
*/

int _strlen_recursion(char *s)
{

if (!*s)
{
return (0);
}

return (1 + _strlen_recursion(++s));
}

/**
*_is_paldrm - helper function
*@s: character
*@i: integer
*@j: integer
*Return: 1 or 0
*/

int _is_paldrm(char s[], int i, int j)
{
if (i == j)
{
return (1);
}

if (s[i] != s[j])
{
return (0);
}

if (i < j + 1)
{
return (_is_paldrm(s, i + 1, j - 1));
}

return (1);
}

/**
*is_palindrome - checks if a string is a palindrome
*@s: character
*Return: 1 or 0
*/

int is_palindrome(char *s)
{

int length = _strlen_recursion(s) - 1;

return (_is_paldrm(s, 0, length));

}

