#include "main.h"

/**
 * *_strcpy - copies
 *
 * @dest: input
 * @src: input
 *
 * Return: pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (scr[i] != '\0');

	return (dest);
}
