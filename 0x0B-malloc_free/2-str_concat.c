#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: - string one
* @s2: - string two
* Return: pointers
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = 0;
while (s1[i] != '\0')
{
i++;
}
j = 0;
while (s2[j] != '\0')
{
j++;
}
i = i + j  + 1;
p = (char *)malloc(sizeof(char) * i);
if (p == NULL)
{
return (NULL);
}
else
{
i = 0;
while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}
j = 0;
while (s2[j] != '\0')
{
p[i] = s2[j];
i++;
j++;
}
p[i] = '\0';
}
return (p);
}
