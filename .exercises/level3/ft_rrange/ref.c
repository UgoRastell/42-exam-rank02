#include <stdlib.h>
int *ft_rrange(int start, int end)
{
	long len = (long)end - start;
	if (len < 0) len = -len;
	len++;
	int *t = malloc(sizeof(int) * len);
	if (!t) return (NULL);
	int step = end <= start ? 1 : -1;
	for (long i = 0; i < len; i++) t[i] = end + (int)i * step;
	return (t);
}
