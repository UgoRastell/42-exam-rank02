#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*cur;
	int		swapped;
	int		t;

	swapped = 1;
	while (lst && swapped)
	{
		swapped = 0;
		cur = lst;
		while (cur->next)
		{
			if (!cmp(cur->data, cur->next->data))
			{
				t = cur->data;
				cur->data = cur->next->data;
				cur->next->data = t;
				swapped = 1;
			}
			cur = cur->next;
		}
	}
	return (lst);
}
