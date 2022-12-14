#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar and a new line
 *
 * Return: Always 0
 */
int main(void)
{
char c[8] = "_putchar";
int n = 0;
while (n < 8)
{
_putchar(c[n]);
n++;
}
_putchar('\n');
return (0);
}

