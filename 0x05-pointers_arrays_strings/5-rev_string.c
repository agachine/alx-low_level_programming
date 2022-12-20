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
int temp , b, a; 
while (s[c] != '\0')
{
c++;
}
a = 0;
b = c - 1;
while (a < b)
{
temp = s[a];
s[a] = s[b];
s[b] = temp;
a++;
b--;
} 
}
