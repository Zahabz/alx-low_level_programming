#include "main.h"
/**
 * _islower - Checks for lower case characters.
 *
 * @c: represents the characters to be checked.
 *
 * Return: 1 if letter is lowercase and 0 if otheriwse.
 *
 */
int _islower(int c)
{
	char i;

	if (i >= 'a' || i <= 'z')
	{
		if (i == c)
		{
			return (1);
		}

	}
	else
	{
		return (0);
	};
}
