#include "main.h"

/**
 * Main - Entry point
 * Description: C - Functions, nested loops
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
