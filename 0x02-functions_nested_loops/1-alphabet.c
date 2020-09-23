#include "holberton.h"

/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: always 0
 *
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	return (0);
}
