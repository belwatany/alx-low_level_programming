#include "main.h"

/**
 * Main - Entry point
 * Description: C - Functions, nested loops
 * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
