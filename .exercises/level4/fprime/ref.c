#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	n;
	int	d;

	if (ac == 2)
	{
		n = atoi(av[1]);
		if (n == 1)
			printf("1");
		d = 2;
		while (n > 1)
		{
			if (n % d == 0)
			{
				printf("%d", d);
				n /= d;
				if (n > 1)
					printf("*");
			}
			else if ((long)d * d > n)
				d = n;
			else
				d++;
		}
	}
	printf("\n");
	return (0);
}
