#include "lists.h"
/**
 * free_listint -  frees a listint_t list
 *@head: pointer to address of first node
 *
 * Return: address of the new element or NULL if it fails
 */
void free_listint(listint_t *head)
{
listint_t *ptr;
while (head)
{
ptr = head->next;
free(head);
head = ptr;
}
}
