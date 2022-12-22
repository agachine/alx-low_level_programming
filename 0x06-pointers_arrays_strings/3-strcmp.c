#include "main.h"
#include <stdio.h>
/**
* _strcmp - compares two strings
* @s1: input parameter string
* @s2: input parameter string 
* Return: Always 0.
*/
int _strcmp(char *s1, char *s2
{
int i = 0;
while (s1[i] != '\0' && s2[j] != '\0')
{
i++;
j++;
}
if (s1[i] == s2[j])
return (0);
else if (s1[i] < s2[j]
return (i -j);
else
return (i -j);
}
