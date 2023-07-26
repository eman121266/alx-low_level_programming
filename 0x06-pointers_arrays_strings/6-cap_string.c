#include "main.h"

/**
 * cap_string - all words og string
 * @s: input
 * Return: string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int f = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			f = 1;
		else if (islower(*s) && f)
		{
			*s -= 32;
			f = 0;
		}
		else
			f = 0;
		s++;
	}
	return (ptr);
}
