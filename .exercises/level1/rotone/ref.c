#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
		for (int i = 0; av[1][i]; i++)
		{
			char c = av[1][i];
			if (c >= 'a' && c <= 'z') c = (c - 'a' + 1) % 26 + 'a';
			else if (c >= 'A' && c <= 'Z') c = (c - 'A' + 1) % 26 + 'A';
			write(1, &c, 1);
		}
	write(1, "\n", 1);
	return (0);
}
