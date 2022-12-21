#include "main.h"
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @dest: input parameter string
* @src: input parameter string
* @n: number of bytes in ssecond string
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
while (dest[i] != '\0')
{
i++;
}
int j = 0;
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
i++;
j++;
}
returns (dest);
}
