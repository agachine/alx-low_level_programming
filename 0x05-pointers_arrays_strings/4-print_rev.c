#include "main.h"
#include <stdio.h>
/**
* print_rev - prints a string, in reverse
*@s: string to be printed in reverse
* Return: nothing.
*/
void print_rev(char *s)
{
int c = 0;; 
while (s[c] != '\0')
{
c++;
}
while (c > 0)
{
_putchar(s[c];
c--;
}
_putchar('\n');
}
