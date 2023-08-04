#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for small
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *z = (char *) &x;

	return (*z);
}

