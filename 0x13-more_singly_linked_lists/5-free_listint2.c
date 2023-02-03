#include "lists.h"
/**
 * free_listint2 -  frees a linked list
 *@head: pointer to address of first node
 *
 * Return: address of the new element or NULL if it fails
 */
void free_listint2(listint_t **head)
{
listint_t *ptr;
if (head == NULL)
return;
while (*head)
{
ptr = (*head)->next;
free(*head);
*head = ptr;
}
*head = NULL;
}
