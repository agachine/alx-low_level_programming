#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @str: string to be modified
* Return: returns char
*/
char *cap_string(char *str)
{
char a[] = {9, 32, 44, 59, 46, 33, 69, 34, 40, 41, 125, 123};
int i;
int j; 
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
for (j = 0; a[j] != '\0'; j++)  
{
if ( a[j] == str[i] && str[i + 1] >= 97 && str[i + 1] <= 122) 
{
str[i + 1] = str[i + 1] - 32;
}
}
}
return (str);
}
