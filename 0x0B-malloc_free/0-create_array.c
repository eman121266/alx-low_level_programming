#include "main.h"

/**
 * *create_array - creates array
 * @size: size of the array
 * @c: char to initialize
 * Return: pointer or Null
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);
	while (size--)
		n[size] = c;

	return (n);
}
