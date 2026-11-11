#include <unistd.h>

static void	put_nbr(int n)
{
	char	c;

	if (n >= 10)
		put_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int		n;
	int		i;
	char	*s;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	n = 0;
	s = av[1];
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	i = 1;
	while (i <= 9)
	{
		put_nbr(i);
		write(1, " x ", 3);
		put_nbr(n);
		write(1, " = ", 3);
		put_nbr(i * n);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
