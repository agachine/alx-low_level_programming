#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i <= 10)
{
int n;
for (n = 97; n <= 122; n++)
{
_putchar(n);
}
_putchar('\n');
i++;
}
}
