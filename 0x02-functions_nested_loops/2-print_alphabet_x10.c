#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char ch;
	int c = 0;
	int max = 10;
	for ( ; c < max; ++c)
	{
		for ( ch = 'a'; ch <= 'z'; ++ch)
			_putchar (ch);
		_putchar ('\n');
	}
}
