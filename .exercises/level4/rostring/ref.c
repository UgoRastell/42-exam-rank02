#include <unistd.h>

static int	is_sp(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	char	*s;
	char	*w;
	int		wlen;
	int		printed;

	if (ac >= 2)
	{
		s = av[1];
		while (is_sp(*s))
			s++;
		w = s;
		while (*s && !is_sp(*s))
			s++;
		wlen = s - w;
		printed = 0;
		while (*s)
		{
			while (is_sp(*s))
				s++;
			if (!*s)
				break ;
			if (printed)
				write(1, " ", 1);
			while (*s && !is_sp(*s))
				write(1, s++, 1);
			printed = 1;
		}
		if (wlen && printed)
			write(1, " ", 1);
		write(1, w, wlen);
	}
	write(1, "\n", 1);
	return (0);
}
