#include "main.h"

/**
 * _strpbrk - length
 * @s: string
 * @accept: bytes
 * Return: int
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;

		}
		i++

	}
	return (0);
}
