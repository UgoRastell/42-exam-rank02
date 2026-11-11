#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int));

static int	ascending(int a, int b) { return (a <= b); }
static int	descending(int a, int b) { return (a >= b); }

static t_list	*build(int *t, int n)
{
	t_list	*l = NULL;

	while (n--)
	{
		t_list *e = malloc(sizeof(t_list));
		e->data = t[n];
		e->next = l;
		l = e;
	}
	return (l);
}

static void	test(int *t, int n, int (*cmp)(int, int), const char *name)
{
	t_list	*l = sort_list(build(t, n), cmp);

	printf("%s : [", name);
	while (l)
	{
		t_list *next = l->next;
		printf("%d%s", l->data, next ? ", " : "");
		free(l);
		l = next;
	}
	printf("]\n");
}

int	main(void)
{
	int	a[] = {5, 3, 8, 1, 9, 2};
	int	b[] = {1, 2, 3, 4};
	int	c[] = {42};
	int	d[] = {7, 7, 3, 3, 7, 1, 1};
	int	e[] = {0, -1, INT_MAX, -42, INT_MIN, 13, 0};

	test(a, 6, ascending, "croissant");
	test(a, 6, descending, "decroissant");
	test(b, 4, ascending, "deja trie");
	test(b, 4, descending, "a l'envers");
	test(c, 1, ascending, "un seul");
	test(d, 7, ascending, "doublons");
	test(e, 7, ascending, "extremes");
	test(e, 7, descending, "extremes decroissant");
	return (0);
}
