#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @temp: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *temp)
{
	size_t num = 0;

	while (temp)
	{
		printf("%d\n", h->n);
		num++;
		temp = temp->next;
	}

	return (num);
}
