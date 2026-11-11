#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char *ft_strdup(char *src);
int main(void)
{
	char *t[] = {"Hello", "", "42 school", "une chaine plus longue avec des espaces", NULL};
	for (int i = 0; t[i]; i++)
	{
		char *d = ft_strdup(t[i]);
		if (!d) { printf("NULL\n"); continue; }
		printf("\"%s\" nouvelle_adresse:%d\n", d, d != t[i]);
		free(d);
	}
	return (0);
}
