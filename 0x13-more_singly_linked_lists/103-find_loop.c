#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoises, *hares;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoises = head->next;
	hares = (head->next)->next;

	while (hares)
	{
		if (tortoises == hares)
		{
			tortoises = head;

			while (tortoises != hares)
			{
				tortoises = tortoises->next;
				hares = hares->next;
			}
			return (tortoises);
		}
		tortoises = tortoises->next;
		hares = (hares->next)->next;
	}
	return (NULL);
}
