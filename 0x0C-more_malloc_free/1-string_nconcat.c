#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* string_nconcat  - allocates memory using malloc
*@s1: string 1
*@s2: string 2
*@n: limit 
* Return: ptr.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i, k, j;
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
i = i + n + 1;
ptr = malloc(sizeof(char) * i);
if (ptr == NULL)
{
return (NULL);
}
else
{
i = 0;
while (s1[i] != '\0')
{
ptr[i] = s1[i];
i++;
}
if (n >= j)
{
k = 0;
while (s2[k] != '\0')
{
ptr[i] = s2[k];
i++;
k++;
}
}
else
{
k = 0;
while (k <= n)
{
ptr[i] =  s2[k];
i++;
k++;
}
}
ptr[i] = '\0';
}
return (ptr);
}
