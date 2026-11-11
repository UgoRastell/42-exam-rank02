#include <stdlib.h>
#include "ft_list.h"
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	while (begin_list && *begin_list)
	{
		if ((*cmp)((*begin_list)->data, data_ref) == 0)
		{
			t_list *del = *begin_list;
			*begin_list = del->next;
			free(del);
		}
		else
			begin_list = &(*begin_list)->next;
	}
}
