#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - function that frees a linked list
  * @head: pointer to the head of the list
  *
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = (*head);
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = NULL;
}
