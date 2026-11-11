#include <stdlib.h>
static int is_sep(char c) { return (c == ' ' || c == '\t' || c == '\n'); }
char **ft_split(char *str)
{
	int words = 0, i = 0, k = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i])) i++;
		if (str[i]) words++;
		while (str[i] && !is_sep(str[i])) i++;
	}
	char **tab = malloc(sizeof(char *) * (words + 1));
	if (!tab) return (NULL);
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i])) i++;
		int start = i;
		while (str[i] && !is_sep(str[i])) i++;
		if (i > start)
		{
			tab[k] = malloc(i - start + 1);
			if (!tab[k]) return (NULL);
			for (int j = 0; j < i - start; j++) tab[k][j] = str[start + j];
			tab[k++][i - start] = '\0';
		}
	}
	tab[k] = NULL;
	return (tab);
}
