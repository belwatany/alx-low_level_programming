#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @temp: pointer to the list_t list to print
 *
 * Return: the temp of nodes printed
 */
size_t print_list(const list_t *temp)
{
	size_t s = 0;

	while (temp)
	{
		if (!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		s++;
	}

	return (s);
}
