#include <stdlib.h>
char *ft_itoa(int nbr)
{
	long n = nbr;
	int len = n <= 0;
	for (long t = n; t; t /= 10) len++;
	char *s = malloc(len + 1);
	if (!s) return (NULL);
	s[len] = '\0';
	if (n < 0) { s[0] = '-'; n = -n; }
	if (n == 0) s[0] = '0';
	while (n) { s[--len] = n % 10 + '0'; n /= 10; }
	return (s);
}
