#include "lists.h"
/**
 * pop_listint - nth node of a listint_t linked list
 * @head: linked list
 * Return: nth node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *temp;
temp = head;
while (temp != NULL)
{
while (count != (index - 1))
{  
count++;
}
temp = temp->next;
}
if (count == index)
{
return (temp);
}
else 
return (NULL);
}
