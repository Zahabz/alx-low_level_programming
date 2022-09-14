#include "main.h"
/**
 * _abs - Computes absolute value of integer
 *
 * @n: Input integer
 *
 * Return: @n if positive and (n * -1) if negative
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	};
}
