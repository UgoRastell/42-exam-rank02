#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int ft_strlen(char *str);
int main(void)
{
	char *t[] = {"Hello", "", "42", "une phrase un peu plus longue", "\t\n", NULL};
	for (int i = 0; t[i]; i++) printf("ft_strlen(\"%s\") = %d\n", t[i], ft_strlen(t[i]));
	return (0);
}
