#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0, start = -1, end = 0;
		while (av[1][i])
		{
			if (av[1][i] != ' ' && av[1][i] != '\t'
				&& (i == 0 || av[1][i - 1] == ' ' || av[1][i - 1] == '\t'))
				start = i;
			i++;
		}
		if (start >= 0)
		{
			end = start;
			while (av[1][end] && av[1][end] != ' ' && av[1][end] != '\t') end++;
			write(1, av[1] + start, end - start);
		}
	}
	write(1, "\n", 1);
	return (0);
}
