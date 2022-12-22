#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @s: string to be modified
* Return: returns char
*/
char *leet(char *s)
{
int i, j;
char leetorg[] = "aAeEoOtTlL";
char leet_rep[] = "4433007711";
i = 0;
while (s[i] != '\0')
{
j = 0;
while (leetorg[j] != '\0')
{
if (s[i] == leetorg[j])
{
s[i] = leet_rep[j];
}
j++;
}
i++;
}
return (s);
}
