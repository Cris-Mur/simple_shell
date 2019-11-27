#include "shell.h"

/**
 * add_vari_end - add new vari(node) at end
 * @head: head of the linked
 * @coso: input string
 * Return: updated list
 */

vari_t *add_vari_end(vari_t **head, char *coso)
{
	vari_t *new;
	vari_t *temp;

	temp = *head;

	new = malloc(sizeof(vari_t));
	if (!new)
	{
		return (NULL);
	}
	new->part = _strdup(coso);
	new->nxt = NULL;
	if (*head == NULL)
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
