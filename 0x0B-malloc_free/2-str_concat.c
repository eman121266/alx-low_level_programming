#include "main.h"

/**
 * _strlen - find length
 * @s: string
 * Return: int
*/

int _strlen(char *s)
{
	int si = 0;

	for (; s[si] != '\0'; si++)
	;
	return (si);
}

/**
 * *str_concat - concatenates two
 * @s1: string
 * @s2: string
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int si1, si2, i;
	char *m;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	si1 = _strlen(s1);
	si2 = _strlen(s2);
	m = malloc((si1 + si2) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (i = 0; i <= si1 + si2; i++)
	{
		if (i < si1)
			m[i] = s1[i];
		else
			m[i] = s2[i - si1];
	}
	m[i] = '\0';
	return (m);
}
