#include "lists.h"
/**
 * pop_listint - deletes the head node of a  linked list
 * @head: linked list
 * Return: he head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *ptr;
int hold = 0;
if (*head)
{
ptr = (*head)->next;
hold = (*head)->n;
free(*head);
*head = ptr;
}
else
return (0);
return (hold);
}
