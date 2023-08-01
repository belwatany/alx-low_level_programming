#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	if (slow == fast)
	{
		printf("-> [%p] %d\n", (void *)slow, slow->n);
		exit(98);
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}

	return (0);
}
