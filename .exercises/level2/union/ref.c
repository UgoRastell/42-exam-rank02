#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int seen[256] = {0};
		for (int k = 1; k <= 2; k++)
			for (int i = 0; av[k][i]; i++)
			{
				unsigned char c = av[k][i];
				if (!seen[c]) { write(1, &c, 1); seen[c] = 1; }
			}
	}
	write(1, "\n", 1);
	return (0);
}
