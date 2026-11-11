#include <stdlib.h>
int *ft_range(int start, int end)
{
	long len = (long)end - start;
	if (len < 0) len = -len;
	len++;
	int *t = malloc(sizeof(int) * len);
	if (!t) return (NULL);
	int step = start <= end ? 1 : -1;
	for (long i = 0; i < len; i++) t[i] = start + (int)i * step;
	return (t);
}
