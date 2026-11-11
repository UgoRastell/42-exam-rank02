#include <stdlib.h>
char *ft_strdup(char *src)
{
	int n = 0;
	while (src[n]) n++;
	char *d = malloc(n + 1);
	if (!d) return (NULL);
	for (int i = 0; i <= n; i++) d[i] = src[i];
	return (d);
}
