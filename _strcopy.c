#include "shell.h"

/**
 * _strcpy - copy string
 * @dest: destine pointer
 * @src: source string
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (src[n] != 00)
	{
		n++;
	}
	for (i = 0; i < n && src[i] != 00; i++)
		dest[i] = src[i];
	for (; i <= n; i++)
		dest[i] = 00;
	return (dest);
}
