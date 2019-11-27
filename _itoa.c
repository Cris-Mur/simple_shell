#include "shell.h"

/**
 * _itoa - convert integer to char.
 * @num: integer to be converted.
 * Return: character string of number.
 */

char *_itoa(int num)
{
	schar *str;
	int i = 0, num_cpy = num;

	while (num_cpy > 0)
	{
		num_cpy /= 10;
		i++;
	}

	str = malloc(1 * (i + 1));

	if (str == NULL)
		return (NULL);

	str[i] = '\0';

	while (i--)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
	}

	return (str);
}
