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

	for (a = 0; s[a] != '\0'; a++)

	i--;

	for (i = 0; i < a ; i++)
	{
		temp = s[a];
		s[a] = s[i];
		s[i] = temp;
		i--;
	}
}
