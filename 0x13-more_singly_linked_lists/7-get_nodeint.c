#include "lists.h"

/**
 * get_nodeint_at_index - returns a node in a linked list at certain index
 * @head: first node of the linked list
 * @index: index of node to return
 *
 * Return: points to the searched node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}

	return (temp ? temp : NULL);
}
