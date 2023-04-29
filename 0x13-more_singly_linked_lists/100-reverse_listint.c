#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *B = NULL;
listint_t *Next = NULL;
while (*head)
{
Next = (*head)->Next;
(*head)->Next = B;
B = *head;
*head = Next;
}
*head = B;
return (*head);
}
