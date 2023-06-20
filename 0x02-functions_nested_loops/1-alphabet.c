#include "main.h"

/**
 * Main - Entry point
 * Description: print_alphabet - print all alphabet in lowercase
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
