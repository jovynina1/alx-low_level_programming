#include "lists.h"

/**
 * sum_dlistint - find sum of elements in the list
 * @head: head of linked list
 * Return: sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
