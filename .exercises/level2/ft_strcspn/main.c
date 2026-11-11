#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

size_t ft_strcspn(const char *s, const char *reject);
int main(void)
{
	char *t[][2] = {{"hello world", " "}, {"hello", "xyz"}, {"hello", ""}, {"", "abc"},
		{"abcdef", "fed"}, {"42school", "0123456789"}, {"aaa", "a"}, {NULL, NULL}};
	for (int i = 0; t[i][0]; i++)
		printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", t[i][0], t[i][1], ft_strcspn(t[i][0], t[i][1]));
	return (0);
}
