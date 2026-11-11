#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int	main(void)
{
	for (int i = 0; i < 256; i++)
		printf("swap_bits(%d) = %d\n", i, swap_bits((unsigned char)i));
	return (0);
}
