#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
		for (int i = 0; av[1][i]; i++)
		{
			char c = av[1][i];
			if (c >= 'A' && c <= 'Z')
			{
				write(1, "_", 1);
				c += 32;
			}
			write(1, &c, 1);
		}
	write(1, "\n", 1);
	return (0);
}
