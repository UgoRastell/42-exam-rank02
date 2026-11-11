#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int *ft_range(int start, int end);
static void test(int s, int e)
{
	int *t = ft_range(s, e);
	int n = (e > s ? e - s : s - e) + 1;
	printf("ft_range(%d, %d) = {", s, e);
	for (int i = 0; i < n; i++) printf("%d%s", t[i], i + 1 < n ? ", " : "");
	printf("}\n");
	free(t);
}
int main(void)
{
	test(1, 3); test(-1, 2); test(0, 0); test(0, -3); test(5, 10); test(-3, -7); test(42, 42);
	return (0);
}
