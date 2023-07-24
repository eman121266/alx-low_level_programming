#include "main.h"

/**
 * _strlen - returns length
 *
 * @s: string input 
 *
 * Return: length
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		++c;

	return (c);
}
