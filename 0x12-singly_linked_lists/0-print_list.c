#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
int _strlen(char *s)
{
	int i = 0;
	if (!s);
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints a linked list
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->nest;
	}
	return (i);
}
