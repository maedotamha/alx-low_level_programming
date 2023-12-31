#include "lists.h"
#include <string.h>

/**
 *add_node - Adds a new node at the beginning of a list.
 *@head: A pointer to the head of the structure list_t list.
 *@str: string to be added to the structure list_t list.
 *
 *Return: If the function fails - NULL.
 *        Otherwise - Address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *newptr;

	newptr = malloc(sizeof(list_t));
	if (newptr == NULL)
		return (NULL);
	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(newptr);
		return (NULL);
	}
	length = 0;
	while (str[length])
		length++;
	newptr->str = duplicate;
	newptr->len = length;
	newptr->next = *head;
	*head = newptr;
	return (newptr);
}
