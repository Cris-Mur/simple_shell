#include "shell.h"

/**
 * add_envi_end - add new vari(node) at end
 * @head: head of the linked
 * @coso: input string
 * Return: updated list
 */

envi_t *add_envi_end(envi_t **head, char *coso)
{
	envi_t *new;
	envi_t *temp;

	temp = *head;

	new = malloc(sizeof(vari_t));
	if (!new)
	{
		return (NULL);
	}
	new->name = _strdup(coso);
	new->nxt = NULL;
	if (temp->name == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->nxt != NULL)
		{
			temp = temp->nxt;
		}
		temp->nxt = new;
	}
	return (*head);
}
