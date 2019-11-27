#include "shell.h"


/**
 * _strdup - create a buffer with content
 * @str: input string
 * Return: dir of the buffer
 */

char *_strdup(char *str)
{
	char *inventary = NULL;

	inventary = _mkbuffer(_strlen(str));
	if (!inventary)
	{
		perror("memory corrupt D:");
		exit(1);
	}
	_strcpy(inventary, str);
	return (inventary);
}
