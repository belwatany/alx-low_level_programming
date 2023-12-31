#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The input string.
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
