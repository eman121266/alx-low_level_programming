#include "main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of time the _ character
 *	should be printed
*/

void print_line(int n)
{
	int ln;

	if (n <= 0)
		_purchar('\n');
	else
	{
		for (ln = 1; ln <= n; ln++)
			_putchar('_');
		_putchar('\n');
	}
}
