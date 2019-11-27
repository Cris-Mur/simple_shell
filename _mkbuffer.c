#include "shell.h"


/**
 * _mkbuffer - create a buffer
 * @size: size of the buffer (MAX 1024)
 * Return: dir of the buffer
 */

char *_mkbuffer(size_t size)
{
	char *inventary = NULL;

	if (size > 0 && size < 1025)
	{
		inventary = malloc(size * sizeof(char));
		if (inventary == NULL)
		{
			free(inventary);
			perror("Error memory corrupt");
		}
	}
	else
	{
		perror("WARNIG: Buffer mayor de 1024 bytes");
		inventary = malloc(size * sizeof(char));
		if (inventary == NULL)
		{
			free(inventary);
			perror("Error memory corrupt");
		}
	}
	return (inventary);
}
