#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int max(int *tab, unsigned int len);
int main(void)
{
	int a[] = {1, 5, 3}, b[] = {-5, -2, -9}, c[] = {42}, d[] = {3, 3, 3}, e[] = {INT_MIN, 0, INT_MAX};
	printf("%d\n%d\n%d\n%d\n%d\n", max(a, 3), max(b, 3), max(c, 1), max(d, 3), max(e, 3));
	printf("vide : %d\n", max(a, 0));
	return (0);
}
