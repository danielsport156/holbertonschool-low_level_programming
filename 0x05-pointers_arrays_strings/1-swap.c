#include "holberton.h"

/**
* swap_int - swap values.
*
*@a: original value 98 but swaped for value of b.
*@b: original value 42 but swaped for value of a.
*
* Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int p = *a;
*a = *b;
*b = p;
}
