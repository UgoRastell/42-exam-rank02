#include <unistd.h>
static void put_nbr(long n)
{
	char c;
	if (n >= 10) put_nbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}
int main(int ac, char **av)
{
	long n = 0, sum = 0;
	if (ac == 2)
	{
		int i = 0, sign = 1;
		if (av[1][i] == '-' || av[1][i] == '+')
			if (av[1][i++] == '-') sign = -1;
		while (av[1][i] >= '0' && av[1][i] <= '9')
			n = n * 10 + av[1][i++] - '0';
		n *= sign;
	}
	for (long k = 2; k <= n; k++)
	{
		int prime = 1;
		for (long d = 2; d * d <= k; d++)
			if (k % d == 0) { prime = 0; break; }
		if (prime) sum += k;
	}
	put_nbr(sum);
	write(1, "\n", 1);
	return (0);
}
