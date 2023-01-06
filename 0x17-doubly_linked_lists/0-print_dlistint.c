#include "lists.h"
#include<stdio.h>

/**
 * print_dlistint - print data of doubly linked list
 * @h: head of the list
 * Return: returns the number of nodes in the list or NULL
 */

size_t print_dlistint(const dlistint_t *h)
{
	
	int nodeCount = 0;

	if(h == NULL)
	{
		printf("empty list");
		return 0;
	}

	while(h != NULL) 
	{
		printf("%d", h->n);
		h = h->next;

		nodeCount++;
	}

	return nodeCount;
}
