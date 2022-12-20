#include "main.h"
#include <stdio.h>
/**
* rev_string - reverses a string
*@s: string to be printed in reverse
* Return: nothing.
*/
void rev_string(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
while (c > 0)
{
_putchar(s[c]);
c--;
}
}
