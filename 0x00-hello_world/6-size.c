#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("Size of char: %d byte(s)\n", sizeof(b));
	printf("Size of int: %d byte(s)\n", sizeof(a));
	printf("Size of long int: %d byte(s)\n", sizeof(c));
	printf("Size of long long int: %d byte(s)\n", sizeof(d));
	printf("Size of float: %d byte(s)\n", sizeof(c));

	return (0);
}
