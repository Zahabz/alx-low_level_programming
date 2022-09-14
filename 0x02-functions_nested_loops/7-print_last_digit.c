#include "main.h"
/**
 * print_last_digit - Computes the last digit in a particular number
 *
 * @n: Input number
 *
 * Return: The last digit @z
 */
int print_last_digit(int n)
{
	int z;

	if (n > 0 && n > 10)
	{
		z = n % 10;

	}
	else if (n < 0 && n < -10)
	{
		z = (-1 * n) % 10;

	};

	return (z);
}
