#include "shell.h"

/**
 * _getcont - obtain name of the variable
 * @level: input linked list
 * @str: input string
 * @name: name of the variable to modify
 * Return: string of the level
 */

char *_getcont(envi_t **vari, char *str)
{
	char *ret;
	char *delim = "=";
    envi_t *level;
    level = *vari;
	while (level)
	{
		if ((_strcmp(level->name, str)) == 0)
		{
			ret = strtok(str, delim);
			delim = "\0";
			ret = strtok(NULL, delim);
			delim = ":";
			ret = strtok(ret, delim);
			while (ret != NULL)
			{
				add_vari_end(&level->content, ret);
				ret = strtok(NULL, ":\0");
			}
			return (ret);
		}
		else
		{
			level = level->nxt;
		}
	}
	return (ret);
}
