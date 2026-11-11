#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int ft_strcmp(char *s1, char *s2);
static int sg(int x) { return (x > 0) - (x < 0); }
int main(void)
{
	char *t[][2] = {{"abc", "abc"}, {"abc", "abd"}, {"abd", "abc"}, {"", ""}, {"", "a"}, {"a", ""},
		{"abc", "abcd"}, {"Hello", "hello"}, {"\x80", "a"}, {"a\xff", "a"}, {NULL, NULL}};
	for (int i = 0; t[i][0]; i++)
		printf("ft_strcmp(\"%s\", \"%s\") : signe %d\n", t[i][0], t[i][1], sg(ft_strcmp(t[i][0], t[i][1])));
	return (0);
}
