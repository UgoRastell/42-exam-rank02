#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char **ft_split(char *str);
int main(void)
{
	char *t[] = {"Hello world", "  plusieurs   espaces  ", "\ttab\tet\nnewline\n", "", "   ",
		"un", "a b c d e f", NULL};
	for (int i = 0; t[i]; i++)
	{
		char **w = ft_split(t[i]);
		printf("\"%s\" -> ", t[i]);
		if (!w) { printf("NULL\n"); continue; }
		int k = 0;
		for (; w[k]; k++) { printf("[%s]", w[k]); free(w[k]); }
		printf(" (%d mots)\n", k);
		free(w);
	}
	return (0);
}
