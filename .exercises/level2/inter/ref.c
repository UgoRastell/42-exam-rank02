#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int seen[256] = {0};
		for (int i = 0; av[1][i]; i++)
		{
			unsigned char c = av[1][i];
			if (seen[c]) continue;
			for (int j = 0; av[2][j]; j++)
				if (av[2][j] == av[1][i]) { write(1, &c, 1); seen[c] = 1; break; }
		}
	}
	write(1, "\n", 1);
	return (0);
}
