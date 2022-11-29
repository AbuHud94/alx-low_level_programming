#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a listint_t list
 * @head: a pointer to the address of the head
 * @n: the integer for the new node
 * Return: if the fucntion fails - NULL
 * Otherwise, the address of the new elemet
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
