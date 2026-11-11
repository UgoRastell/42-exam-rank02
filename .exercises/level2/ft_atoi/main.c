#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int ft_atoi(const char *str);
int main(void)
{
	char *t[] = {"42", "-42", "+42", "   \t\n\v\f\r 123abc", "0", "-0", "abc", "", "--42", "+-42",
		"2147483647", "-2147483648", "  -00012 3", "12-3", " + 5", NULL};
	for (int i = 0; t[i]; i++) printf("ft_atoi(\"%s\") = %d\n", t[i], ft_atoi(t[i]));
	return (0);
}
