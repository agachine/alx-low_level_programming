#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint - prints all elements of a listint_s list
* @h: listint_s object
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
unsigned int i = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
