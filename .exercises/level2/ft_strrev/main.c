#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char *ft_strrev(char *str);
int main(void)
{
	char *t[] = {"Hello", "", "a", "ab", "42 school", "radar", NULL};
	for (int i = 0; t[i]; i++)
	{
		char buf[64]; strcpy(buf, t[i]);
		char *r = ft_strrev(buf);
		printf("\"%s\" -> \"%s\" retour==param:%d\n", t[i], buf, r == buf);
	}
	return (0);
}
