#include "lists.h"
/**
 *  * get_dnodeint_at_index - returns the
 *   * nth node of a dlistint_t linked list
 *      * @index: index of the nth node
 *       * @head: head of the list
 *       * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int m;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	m = 0;

	while (head != NULL)
	{
		if (m == index)
			break;
		head = head->next;
		m++;
	}

	return (head);
}
