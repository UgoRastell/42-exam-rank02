#include "ft_list.h"
int ft_list_size(t_list *begin_list)
{
	int n = 0;
	for (; begin_list; begin_list = begin_list->next) n++;
	return (n);
}
