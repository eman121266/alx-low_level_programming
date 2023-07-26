#include "main.h"

/**
 * _strncpy - a function that copies
 *
 *
 * @dest: pointer to input
 * @src: pointer input 2
 * @n: bytes
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
