#include "shell.h"

/**
 * create - create an list of the list
 * Return: dir of the memory of the list
 */

envi_t *create()
{
	envi_t *new;

	new = NULL;
	new = malloc(sizeof(envi_t));
	if (new == NULL)
	{
		perror("unable to allocate envi variables D:");
		exit(1);
	}
	return (new);
}
