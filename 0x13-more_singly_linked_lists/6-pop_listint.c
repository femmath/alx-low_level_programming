#include "lists.h"

/**
 * pop_listint - deletes the head node of the linked list
 * @head: points to first element on the linked list
 *
 * Return: data inside the elements that was deleted,
 * or if the list is empty 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (count);
}
