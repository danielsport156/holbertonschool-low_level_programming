#include<stdio.h>
/**                                                                       
 *main - Entry point                                                     
 *                                                                        
 * Return: Always 0 (Success)                                             
 */
int main(void)
{
  int intType;
  char charType;
  float floatType;
  double doubleType;
  
  printf("Size of an int: %d byte(s)\n", sizeof(intType));
  printf("Size of a float: %d byte(s)\n", sizeof(floatType));
  printf("Size of a double: %d byte(s)\n", sizeof(doubleType));
  printf("Size of a char: %d byte(s)\n", sizeof(charType));
  return (0);
}
