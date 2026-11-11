#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

char *ft_strcpy(char *s1, char *s2);
int main(void)
{
	char *t[] = {"Hello", "", "42 school", "a", NULL};
	for (int i = 0; t[i]; i++)
	{
		char d[32]; memset(d, 'X', sizeof d);
		char *r = ft_strcpy(d, t[i]);
		printf("copie=\"%s\" retour==dest:%d octet_apres:%c\n", d, r == d, d[strlen(t[i]) + 1]);
	}
	return (0);
}
