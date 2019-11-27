#include "shell.h"

/**
 * _getname - obtain name of the variable
 * @str: input string
 * Return: string of the name
 */

char *_getname(char *str)
{
	char *ret;
	const char *del = "=";

	ret = strtok(str, del);
	return (ret);
}
