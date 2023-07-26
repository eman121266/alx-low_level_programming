/**
 * leet - main function.
 * @str : string
 *
 * Description: function that encodes a string into 1337.
 *
 * Return: char str.
 */
char *leet(char *str)
{
	int i, j;
	char leet_code[] = "aAeEoOtTlL";
	char leet_replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == leet_code[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}
	return (str);
}
