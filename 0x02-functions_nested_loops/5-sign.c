#include "main.h"
/**
 * print_sign - Identifies number(positive or negative) and prints sign
 *
 * @n: Represents number to be identified
 *
 * Return: 1 if positive, 0 if zero and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);

	}
	else
	{
		_putchar('-');

		return (-1);
	};
}
