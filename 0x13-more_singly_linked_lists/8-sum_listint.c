#include "lists.h"
/**
 * get_nodeint_at_index - returns the sum of all the data (n) of a linked list
 * @head: linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
unsigned int sum;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
