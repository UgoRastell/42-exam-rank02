#include <unistd.h>

static int	is_sp(char c)
{
	return (c == ' ' || c == '\t');
}

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;
	char	*s;

	i = 1;
	while (i < ac)
	{
		s = av[i];
		j = 0;
		while (s[j])
		{
			c = s[j];
			if (c >= 'A' && c <= 'Z')
				c += 32;
			if (c >= 'a' && c <= 'z' && (j == 0 || is_sp(s[j - 1])))
				c -= 32;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (ac == 1)
		write(1, "\n", 1);
	return (0);
}
