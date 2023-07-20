#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of time the \ character
 *		should be printed
*/

void print_diagonal(int n)
{
	int p, sp;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (sp = 1; sp <= p; sp++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
