#include "main.h"

/**
 * _puts - prints a string to stdout, followed by a new line
 * @str: pointer to string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
