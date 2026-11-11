#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "flood_fill.h"

static void	test(const char *title, char **zone, t_point size, t_point begin)
{
	char	**area = malloc(sizeof(char *) * size.y);

	for (int i = 0; i < size.y; i++)
		area[i] = strdup(zone[i]);
	printf("== %s : depart (%d, %d)\n", title, begin.x, begin.y);
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; i++)
	{
		printf("%s\n", area[i]);
		free(area[i]);
	}
	free(area);
}

int	main(void)
{
	char	*z1[] = {"11111111", "10001001", "10010001", "10110001", "11100001"};
	char	*z2[] = {"1"};
	char	*z3[] = {"0000", "0000", "0000"};
	char	*z4[] = {"0101010", "1010101", "0101010"};
	char	*z5[] = {"aaab", "abab", "aaab", "bbbb"};
	char	*z6[] = {"10000", "10111", "10101", "11101"};

	test("sujet", z1, (t_point){8, 5}, (t_point){7, 4});
	test("sujet, zone de 0", z1, (t_point){8, 5}, (t_point){1, 1});
	test("sujet, coin", z1, (t_point){8, 5}, (t_point){0, 0});
	test("1x1", z2, (t_point){1, 1}, (t_point){0, 0});
	test("tout plein", z3, (t_point){4, 3}, (t_point){2, 1});
	test("damier (pas de diagonale)", z4, (t_point){7, 3}, (t_point){3, 1});
	test("lettres", z5, (t_point){4, 4}, (t_point){0, 0});
	test("lettres, autre zone", z5, (t_point){4, 4}, (t_point){3, 0});
	test("serpent", z6, (t_point){5, 4}, (t_point){1, 0});
	return (0);
}
