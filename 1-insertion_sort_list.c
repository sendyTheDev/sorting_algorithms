#include "sort.h"

/**
 * insertion_sort_list - ascending order using the Insertion sort
 * @list is a doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *h, *m, *nextnode;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;
	h = (*list)->next;
	nextnode = h->next;
	while (h)
	{
		if (h->n < h->prev->n)
		{
			m = h->prev;
			while (m && (h->n < m->n))
			{
				if (!(m->prev))
				{
					m->prev = h;
					h->prev->next = h->next;
					if (h->next)
						h->next->prev = h->prev;
					h->next = m;
					h->prev = NULL;
					*list = h;
				}
				else
				{
					h->prev->next = h->next;
					if (h->next)
						h->next->prev = h > prev;
					m->prev->next = h;
					h->prev = m->prev;
					m->prev = h;
					h > next = m;
				}
				print_list(*list);
				m = h->prev;
			}
		}
		h = nextnode;
		h ? (nextnode = h->next) : (nextnode = NULL);
	}
}
