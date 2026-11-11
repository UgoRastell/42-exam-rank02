#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
		for (int i = 0; av[1][i]; i++)
		{
			int n = 1;
			char c = av[1][i];
			if (c >= 'a' && c <= 'z') n = c - 'a' + 1;
			else if (c >= 'A' && c <= 'Z') n = c - 'A' + 1;
			while (n--) write(1, &c, 1);
		}
	write(1, "\n", 1);
	return (0);
}
