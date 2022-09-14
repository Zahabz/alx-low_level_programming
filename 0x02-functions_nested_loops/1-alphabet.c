#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet: Prints alphabet.
 *
 * Return - 0 Always (Success)
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
