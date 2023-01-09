#include "main.h"
#include <stdio.h>
/**
* _puts - prints a string
*@str: string to be printed
* Return: nothing.
*/
void _puts(char *str)
{
int c = 0;
while (str[c] != '\0')
{
_putchar(str[c]);
c++;
}
_putchar('\n');
}
