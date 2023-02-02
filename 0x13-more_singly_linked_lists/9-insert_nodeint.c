#include "lists.h"
/**
 * insert_nodeint_at_index - This function inserts a
 * new node at given position
 * @head: The head node
 * @idx: The index of the list where new node is to be added
 * @n: The integer data of the new node
 * Return: The address of the new inserted node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
