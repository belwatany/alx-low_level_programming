#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alohabet capital and small
 *
 * Return: Alawys 0 (Success)
*/

int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
