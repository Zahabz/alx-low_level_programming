#include "main.h"
/**
 * _isalpha - Function that checks for alphabetical characters
 *
 * @c: represents the character to be tested by the program
 *
 * Return: 1 if in alphabet and 0 if otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	};
}
