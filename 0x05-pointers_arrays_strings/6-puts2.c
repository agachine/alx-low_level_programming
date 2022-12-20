#include "main.h"
#include <stdio.h>
/**
* puts2 - prints every other character of a string
*@str: string to be printed in reverse
* Return: nothing.
*/
void puts2(char *str)
{
int j = 0;
int i = 0;
while ( str[i] != '\0')
{
j = i + 2;
while ( j < i)
{
_putchar(str[j]);
j++;
}
i++;
}
_putchar('\n');
}

