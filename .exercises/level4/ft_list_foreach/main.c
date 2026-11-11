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

void ft_list_foreach(t_list *begin_list, void (*f)(void *));
static void show(void *d) { printf("<%s>", (char *)d); }
static void upper(void *d) { for (char *s = d; *s; s++) if (*s >= 'a' && *s <= 'z') *s -= 32; }
int main(void)
{
	char a[] = "un", b[] = "deux", c[] = "trois";
	char *t[] = {a, b, c, NULL}, *t0[] = {NULL};
	t_list *l = build(t);
	ft_list_foreach(l, show); printf("\n");
	ft_list_foreach(l, upper); print_list(l);
	free_list(l);
	l = build(t0);
	ft_list_foreach(l, show); printf("liste vide OK\n");
	return (0);
}
