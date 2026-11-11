#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char *ft_strpbrk(const char *s1, const char *s2);
int main(void)
{
	char *t[][2] = {{"hello world", "ow"}, {"hello", "xyz"}, {"hello", ""}, {"", "abc"},
		{"abcdef", "fed"}, {"42school", "lo"}, {NULL, NULL}};
	for (int i = 0; t[i][0]; i++)
	{
		char *r = ft_strpbrk(t[i][0], t[i][1]);
		if (r) printf("ft_strpbrk(\"%s\", \"%s\") = position %ld\n", t[i][0], t[i][1], (long)(r - t[i][0]));
		else printf("ft_strpbrk(\"%s\", \"%s\") = NULL\n", t[i][0], t[i][1]);
	}
	return (0);
}
