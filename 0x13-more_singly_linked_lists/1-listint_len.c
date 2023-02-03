#include "lists.h"
/**
* listint_len -  returns the number of elements in a linked  list
* @h: linked list
* Return: number of elements in list
*/
size_t listint_len(const listint_t *h)
{
int count = 0;
listint_t *ptr = NULL;
if (h == NULL)
return (0);
ptr = h;
while (ptr != NULL)
{
count ++;
ptr = ptr->next;
}
return count; 
}
