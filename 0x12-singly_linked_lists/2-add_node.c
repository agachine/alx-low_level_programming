#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - prints all the elements of a list_t list
*@h: struct
* Return: the number of nodes
*/
size_t list_len(const list_t *h)
{
int n = 0;
if (h->str == NULL)
return (0);
while (h != NULL)
{
h = h->next;
n++;
}
return (n);
}
