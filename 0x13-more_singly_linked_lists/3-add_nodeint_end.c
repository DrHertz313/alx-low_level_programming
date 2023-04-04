#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *w, *lt;

	w = malloc(sizeof(listint_t));
	if (w == NULL)
		return (NULL);

	w->n = n;
	w->next = NULL;

	if (*head == NULL)
		*head = w;

	else
	{
		lt = *head;
		while (lt->next != NULL)
			lt = lt->next;
		lt->next = w;
	}

	return (*head);
}
