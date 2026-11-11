#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet);

int	main(void)
{
	for (int i = 0; i < 256; i++)
		printf("reverse_bits(%d) = %d\n", i, reverse_bits((unsigned char)i));
	return (0);
}
