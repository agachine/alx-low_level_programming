#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @dest: input parameter string
* @src: input parameter string
* @n: 
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)
{
int j = 0;
int i = 0;
while (dest[i] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
