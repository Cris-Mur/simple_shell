#include "shell.h"

/**
 * _strcmp - compare two strings
 * @srch: string of search
 * @src: source of compare
 * Return: difference
 */
size_t _strcmp(char *srch, char *src)
{
	size_t i;
	int  ret;

	i = 0;
	ret = 0;

	for (; srch[i] != 00; i++)
	{
		if (srch[i] != src[i])
		{
			ret = srch[i] - src[i];
			return (ret);
		}
	}
	return (ret);
}
