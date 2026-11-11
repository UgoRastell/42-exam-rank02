#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b);

int	main(void)
{
	unsigned int	t[][2] = {
		{0, 0}, {0, 5}, {5, 0}, {1, 1}, {1, 7}, {7, 1}, {2, 3}, {4, 6},
		{6, 4}, {12, 18}, {21, 6}, {9, 9}, {17, 19}, {100, 75}, {64, 48},
		{1000, 999}, {255, 65535}, {37, 1369}, {360, 84}, {65521, 2}
	};

	for (unsigned i = 0; i < sizeof(t) / sizeof(t[0]); i++)
		printf("lcm(%u, %u) = %u\n", t[i][0], t[i][1], lcm(t[i][0], t[i][1]));
	return (0);
}
