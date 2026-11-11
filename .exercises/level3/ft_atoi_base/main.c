#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(void)
{
	struct { const char *s; int b; } t[] = {
		{"12fdb3", 16}, {"12FDB3", 16}, {"-ff", 16}, {"7fffffff", 16},
		{"-7fffffff", 16}, {"101", 2}, {"-1010", 2}, {"0", 10}, {"", 10},
		{"42", 10}, {"-42", 10}, {"12a", 10}, {"129", 8}, {"777", 8},
		{"0123", 4}, {"4", 4}, {"zz", 16}, {"-", 10}, {"--5", 10},
		{"1-2", 10}, {"aBcDeF", 16}, {"g", 16}, {"9", 9}, {"88", 9},
		{"ABC", 13}, {"1111", 2}, {"00042", 10}, {"-0", 10}, {NULL, 0}
	};

	for (int i = 0; t[i].s; i++)
		printf("ft_atoi_base(\"%s\", %d) = %d\n", t[i].s, t[i].b,
			ft_atoi_base(t[i].s, t[i].b));
	return (0);
}
