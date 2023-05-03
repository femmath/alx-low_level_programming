#include "lists.h"

/**
 * sum_listint - finds the sum of all elements in a listint_t list
 * @head: first node of the linked list
 *
 * Return: sum of the element in the list
 */
int sum_listint(listint_t *head)
{
	int SUM = 0;
	listint_t *temp = head;

	while (temp)
	{
		SUM += temp->n;
		temp = temp->next;
	}

	return (SUM);
}
