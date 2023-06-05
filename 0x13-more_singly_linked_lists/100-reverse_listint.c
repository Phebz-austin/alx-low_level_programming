#include "lists.h"

/**
 * reverse_listint - it will reverse linked list
 * @head: this points to the first node in the list
 *
 * Return: points to first node in said new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
