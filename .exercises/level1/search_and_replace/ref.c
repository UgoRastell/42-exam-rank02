#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 4 && av[2][0] && !av[2][1] && av[3][0] && !av[3][1])
		for (int i = 0; av[1][i]; i++)
		{
			char c = av[1][i] == av[2][0] ? av[3][0] : av[1][i];
			write(1, &c, 1);
		}
	write(1, "\n", 1);
	return (0);
}
