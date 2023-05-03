#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the total unique nodes
 * in a looped listint_t linked list.
 * @head: points to the head of the listint_t to be checked
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the total number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *pens, *fundant;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	pens = head->next;
	fundant = (head->next)->next;

	while (fundant)
	{
		if (pens == fundant)
		{
			pens = fundant;
			while (pens != fundant)
			{
				nodes++;
				pens = pens->next;
				fundant = fundant->next;
			}

			pens = pens->next;
			while (pens != fundant)
			{
				nodes++;
				pens = pens->next;
			}

			return (nodes);
		}

		pens = pens->next;
		fundant = (fundant->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe – Safely print a listint_t list.
 * @head: points to head of the listint_t list.
 *
 * Return: total number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
