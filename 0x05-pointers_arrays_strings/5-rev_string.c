#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: input
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int a, i;
	char temp;

	for (a = 0; s[a] != '\0'; ++a)

	for (i = 0; i < a / 2; i++)
	{
		temp = s[i];
		s[i] = s[a - 1 - i];
		s[a - 1 - i] = temp;
	}
}
