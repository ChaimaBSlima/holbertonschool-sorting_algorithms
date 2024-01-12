#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list
 * from min to max
 * @list: Dobule linked list to sort
 * Return: void.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node;

	if (list == NULL || (*list)->next == NULL)
		return;
	node = (*list)->next;
	while (node)
	{
		while ((node->prev) && (node->prev->n > node->n))
		{
			node = swap(node, list);
			print_list(*list);
		}
		node = node->next;
	}
}
/**
 * swap - swap a node for his previous one
 * @node: node
 * @list: node list
 * Return: a pointer
 */
listint_t *swap(listint_t *node, listint_t **list)
{
	listint_t *back_node = node->prev;
	listint_t *current_node = node;

	back_node->next = current_node->next;
	if (current_node->next)
		current_node->next->prev = back_node;
	current_node->next = back_node;
	current_node->prev = back_node->prev;
	back_node->prev = current_node;
	if (current_node->prev)
		current_node->prev->next = current_node;
	else
		*list = current_node;
	return (current_node);
}
