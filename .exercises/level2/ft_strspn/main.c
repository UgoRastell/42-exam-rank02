#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

size_t ft_strspn(const char *s, const char *accept);
int main(void)
{
	char *t[][2] = {{"hello world", "hel"}, {"hello", "xyz"}, {"hello", ""}, {"", "abc"},
		{"aaabbbccc", "ab"}, {"12345abc", "0123456789"}, {"abc", "cba"}, {NULL, NULL}};
	for (int i = 0; t[i][0]; i++)
		printf("ft_strspn(\"%s\", \"%s\") = %zu\n", t[i][0], t[i][1], ft_strspn(t[i][0], t[i][1]));
	return (0);
}
