#include "holberton.h"

/**
*_strcat - concat string
*@dest: destination
*@src: source
*Return: dest
*/

char *_strcat(char *dest, char *src)
{

char *cat = dest + _strlen(dest);
	int length =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (length);
	*dest = *cat;

	return (cat);
}
