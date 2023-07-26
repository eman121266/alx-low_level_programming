#include <unistd.h>

/**
 * _putchar - writes the character
 *
 * @c: input
 *
 * Return: one
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
