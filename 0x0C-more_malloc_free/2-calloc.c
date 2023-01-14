#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* _calloc - allocates memory for an array, using malloc
*@size: size in bytes of each element
*@nmemb: number of elements of the array
* Return: ptr.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
else
{
ptr = malloc (nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
else
return (ptr);
}
return (0);
}
