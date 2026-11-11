#include <stdio.h>
#include <limits.h>

void	sort_int_tab(int *tab, unsigned int size);

static void	test(int *t, unsigned int n)
{
	sort_int_tab(t, n);
	printf("[");
	for (unsigned int i = 0; i < n; i++)
		printf("%d%s", t[i], i + 1 < n ? ", " : "");
	printf("]\n");
}

int	main(void)
{
	int	a[] = {5, 3, 8, 1, 9, 2};
	int	b[] = {1, 2, 3, 4};
	int	c[] = {4, 3, 2, 1};
	int	d[] = {42};
	int	e[] = {7, 7, 3, 3, 7, 1, 1};
	int	f[] = {0, -1, INT_MAX, -42, INT_MIN, 13, 0};
	int	g[] = {2, 1};
	int	h[] = {99, -99};

	test(a, 6);
	test(b, 4);
	test(c, 4);
	test(d, 1);
	test(e, 7);
	test(f, 7);
	test(g, 2);
	test(h, 0);
	printf("h[0] = %d (size 0 : rien ne doit bouger)\n", h[0]);
	return (0);
}
