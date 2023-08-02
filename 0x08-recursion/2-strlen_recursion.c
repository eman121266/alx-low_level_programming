#include "main.h"

/**
 * _strlen_recursion - returns
 * @s: pointer
 * Return: int
*/

int _strlen_recursion(char *s)
{
int t = 0;

if (*s > '\0')
{
	t += _strlen_recursion(s + 1) + 1;
}

return (t);
}

