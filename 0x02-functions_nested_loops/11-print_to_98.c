#include "main.h"
/**
 * print_to_98 - Displays all natural numbers from n to 98
 *
 * @n: Input integer
 *
 * Return: All natural number from input integer to 98
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i == 98)
		{
			_putchar(i);
		}
		else
		{
			_putchar((i) + ",\t");
		};
	}
}
