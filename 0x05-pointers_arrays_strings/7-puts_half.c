#include "main.h"
#include <stdio.h>
/**
* puts_half - prints half of a string
*@str: string to be printed
* Return: nothing.
*/
void puts_half(char *str)
{
  int n;
int i = 0;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0) 
n = i / 2;
else 
n = ((i - 1) /2);
  
while ( n > 0)
{
_putchar(str[n])
n++;
}
}
