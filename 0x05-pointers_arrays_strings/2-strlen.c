#include "holberton.h"

/**
 * _strlen - returns the length of a string
 *
 *@s: it will tell my function start and stop at.
 *
 * Return: Count.
 */
int _strlen(char *s)
{
  int count = 0;
  while(*s != '\0')
    {
      count++;
      s++;
    }
  return (count);
}
