#include "lists.h"

/**
 * add_nodeint - adds at the beginning of the linked list a new node
 * @head: pointer to the first node on the list
 * @n: the data to insert at the new node
 *
 * Return: points to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
