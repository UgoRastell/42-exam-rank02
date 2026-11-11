#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void ft_swap(int *a, int *b);
int main(void)
{
	int v[][2] = {{1, 2}, {-5, 42}, {0, 0}, {INT_MAX, INT_MIN}};
	for (int i = 0; i < 4; i++)
	{
		int a = v[i][0], b = v[i][1];
		ft_swap(&a, &b);
		printf("(%d, %d) -> (%d, %d)\n", v[i][0], v[i][1], a, b);
	}
	return (0);
}
