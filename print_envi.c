#include "zelda.h"

/**
 * print_envi - print list of names the ENV
 * @names: input linked list
 * Return: size of the list
 */

size_t print_envi(envi_t *names)
{
	size_t size;

	envi_t *temp = names;

	size = 0;
	while (temp != NULL)
	{
		write(STDOUT_FILENO, temp->name, _strlen(temp->name));
		write(STDOUT_FILENO, " = ", _strlen(" = "));
		print_vari(temp);
		write(STDOUT_FILENO, "\n", _strlen("\n"));
		temp = temp->nxt;
		size++;
	}
	return (size);
}
