#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: int
 * Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	int *m = mallov(b);

	if (m == 0)
		exit(98);

	return (m);
}
