#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char *ft_itoa(int nbr);
int main(void)
{
	int t[] = {0, 1, -1, 42, -42, 10, -10, 100, 123456, INT_MAX, INT_MIN};
	for (int i = 0; i < 11; i++)
	{
		char *s = ft_itoa(t[i]);
		printf("ft_itoa(%d) = \"%s\"\n", t[i], s ? s : "(null)");
		free(s);
	}
	return (0);
}
