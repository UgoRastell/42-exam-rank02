#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	a;
	int	b;
	int	t;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		while (b)
		{
			t = a % b;
			a = b;
			b = t;
		}
		printf("%d", a);
	}
	printf("\n");
	return (0);
}
