#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "ft_list.h"

static t_list *push(t_list *l, void *data)
{
	t_list *n = malloc(sizeof(t_list));
	n->data = data; n->next = l;
	return (n);
}
static t_list *build(char **t)
{
	t_list *l = NULL;
	int n = 0;
	while (t[n]) n++;
	while (n--) l = push(l, t[n]);
	return (l);
}
static void print_list(t_list *l)
{
	printf("[");
	for (; l; l = l->next) printf("%s%s", (char *)l->data, l->next ? ", " : "");
	printf("]\n");
}
static void free_list(t_list *l)
{
	while (l) { t_list *n = l->next; free(l); l = n; }
}

int ft_list_size(t_list *begin_list);
int main(void)
{
	char *t0[] = {NULL}, *t1[] = {"a", NULL}, *t3[] = {"a", "b", "c", NULL};
	char *t7[] = {"1", "2", "3", "4", "5", "6", "7", NULL};
	char **all[] = {t0, t1, t3, t7};
	for (int i = 0; i < 4; i++)
	{
		t_list *l = build(all[i]);
		printf("taille = %d\n", ft_list_size(l));
		free_list(l);
	}
	(void)print_list;
	return (0);
}
