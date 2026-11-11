#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void ft_putstr(char *str);
int main(void)
{
	char *t[] = {"Hello", "", "42 Le Havre\t!", "a", "deux  espaces  ", NULL};
	for (int i = 0; t[i]; i++) { printf("[%d] ", i); fflush(stdout); ft_putstr(t[i]); printf("|\n"); }
	return (0);
}
