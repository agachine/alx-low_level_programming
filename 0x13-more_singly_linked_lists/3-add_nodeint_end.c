#include "lists.h"
/**
 * add_nodeint_end - add a node to end of linked list
 * @head: node to be added
 * @n: value of node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *ptr;
temp = malloc(sizeof(listint_t));
if (temp == NULL)
return (NULL);
temp->n = n;
temp->next = NULL;
if (*head)
{
ptr = *head; 
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = temp;
}
else
{
*head = temp; 
}
return (temp);
}
