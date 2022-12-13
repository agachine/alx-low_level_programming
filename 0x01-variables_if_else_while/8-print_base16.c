#include<stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
char l;
int num;
for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
}
for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}
putchar('\n');
return (0);
}
