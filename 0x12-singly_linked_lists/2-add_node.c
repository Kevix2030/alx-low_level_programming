#include "lists.h"

/**
 * add_node - adds anew node
 * at the beginning of a list_t list
 * @head: a pointer to the hesader of a linked list
 * @str - string to store the list
 * Return: address of the head updated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	new_node = malloc(size of(list_t));
	if (head == NULL || str == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[str_len])
		str_len++;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
