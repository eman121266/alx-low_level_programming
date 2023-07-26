#include "main.h"

/**
 * _strcat - function that two strings
 *
 * @dest: pointer input 1
 * @src: pointer to source input
 *
 * Return: pointer resulting
*/
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; scr[c2] ; c2++)

		dest[c++] = scr[c2];

	return (dest);
}
