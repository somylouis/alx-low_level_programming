#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
