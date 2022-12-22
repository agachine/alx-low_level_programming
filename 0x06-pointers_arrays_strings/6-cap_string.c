#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @str: string to be modified
* Return: returns char
*/
char *cap_string(char *str)
{
char a[] = {9, 10, 32, 44, 59, 46, 33, 69, 34, 40, 41, 125, 123};
int j;
int i;
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; str[i] != '\0' && a[j] != '\0'; j++)  
{
if (a[i] == str[j] && str[i + 1] >= 97 && str[i + 1] <= 122) 
{
str[i + 1] = str[i + 1] - 32;
}
}
return (str);
}
