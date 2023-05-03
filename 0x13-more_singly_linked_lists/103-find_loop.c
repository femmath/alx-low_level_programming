#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: the starting node address of the loop, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *rim = head;
	listint_t *tyre = head;

	if (!head)
		return (NULL);

	while (rim && tyre && tyre->next)
	{
		tyre = tyre->next->next;
		rim = rim->next;
		if (tyre == rim)
		{
			rim = head;
			while (rim != tyre)
			{
				rim = rim->next;
				tyre = tyre->next;
			}
			return (tyre);
		}
	}

	return (NULL);
}
