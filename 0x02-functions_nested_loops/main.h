#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * _putchar - Prints characters into word
 *
 */
int _putchar(char d);
/**
 * print_alphabet -Prints alphabet in lowercase
 *
 */
void print_alphabet(void)
{

	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	};

	_putchar('\n');
};

#endif
