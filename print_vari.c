#include "zelda.h"

/**
 * print_vari - print list of content the ENV
 *
 * Return: size of the content
 */

size_t print_vari(envi_t *var)
{
	size_t size;

	vari_t *cont = var->content;

	size = 0;
	while (cont)
	{
		write(STDOUT_FILENO, cont->part, _strlen(cont->part));
		write(STDOUT_FILENO, ":", 2);
		cont = cont->nxt;
		size++;
	}
	return (size);
}
