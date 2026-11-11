#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
		for (int i = 0; av[1][i]; i++)
		{
			char c = av[1][i];
			if (c >= 'a' && c <= 'z') c = 'a' + 'z' - c;
			else if (c >= 'A' && c <= 'Z') c = 'A' + 'Z' - c;
			write(1, &c, 1);
		}
	write(1, "\n", 1);
	return (0);
}
