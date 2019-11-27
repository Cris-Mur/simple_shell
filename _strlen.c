#include "shell.h"

/**
 * _strlen - count size of a string
 * @buffersito: input string
 * Return: size of string
 */

size_t _strlen(char *buffersito)
{
	size_t size;

	size = 0;
	while (buffersito[size])
	{
		size++;
	}
	return (size);
}
