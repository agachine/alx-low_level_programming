#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a  linked list
 * @head: linked list
 *@index: index of the node, starting at 0
 * Return: nth node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *temp;
temp = head;
while (temp != NULL)
{
if (count == index)
{
return (temp);
}
count++;
temp = temp->next;
}
return (NULL);
}
