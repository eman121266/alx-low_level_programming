#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array
 * Return: 0
*/
int check_num(char *str)
{
	unsigned int c;

	c = 0;
	while (c < strlen(str))

	{
		if (!isdigit(str[c]))
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/**
 * main - print the name
 * @argc: count
 * @argv: argument
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int c;
	int str;
	int sum;

	c = 1;
	while (c < argc)

	{
		if (check_num(argv[c]))
		{
			str = atoi(argv[c]);
			sum += str;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		c++;
	}
	printf("%d\n", sum);
	return (0);
}
