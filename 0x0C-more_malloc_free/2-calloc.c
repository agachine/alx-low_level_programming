#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - allocates memory for an array, using malloc
*@size: size in bytes of each element
*@nmemb: number of elements of the array
* Return: ptr.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc (nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
else
{
i = 0;
while (i < nmemb *size)
{
ptr[i] = 0;
}
}
return (ptr);
return (0);
}
