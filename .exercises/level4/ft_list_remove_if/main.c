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

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *));
static int cmp(void *a, void *b) { return (strcmp((char *)a, (char *)b)); }
int main(void)
{
	char *cases[][8] = {
		{"a", "b", "c", NULL}, {"x", "b", "c", NULL}, {"b", "c", "x", NULL},
		{"x", "x", "x", NULL}, {"x", "a", "x", "b", "x", NULL}, {"a", "b", NULL}, {NULL}};
	for (int i = 0; i < 7; i++)
	{
		t_list *l = build(cases[i]);
		ft_list_remove_if(&l, "x", cmp);
		print_list(l);
		free_list(l);
	}
	return (0);
}
