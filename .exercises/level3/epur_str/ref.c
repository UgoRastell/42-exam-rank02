#include <unistd.h>

static int	is_sp(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	char	*s;
	int		first;

	if (ac == 2)
	{
		s = av[1];
		first = 1;
		while (*s)
		{
			while (is_sp(*s))
				s++;
			if (!*s)
				break ;
			if (!first)
				write(1, " ", 1);
			first = 0;
			while (*s && !is_sp(*s))
				write(1, s++, 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
