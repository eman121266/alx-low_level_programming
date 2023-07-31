#include "main.h"

/**
 * *_memset - fills memory
 * @s: pointer
 * @b: constant
 * @n: bytes
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);
}
