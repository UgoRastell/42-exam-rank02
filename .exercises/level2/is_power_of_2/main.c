#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int is_power_of_2(unsigned int n);
int main(void)
{
	unsigned int t[] = {0, 1, 2, 3, 4, 5, 6, 8, 12, 16, 64, 100, 1024, 1023, 2147483648u, 4294967295u};
	for (int i = 0; i < 16; i++) printf("is_power_of_2(%u) = %d\n", t[i], is_power_of_2(t[i]));
	return (0);
}
