#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @temp: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *temp)
{
	size_t num = 0;

	while (temp)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}
