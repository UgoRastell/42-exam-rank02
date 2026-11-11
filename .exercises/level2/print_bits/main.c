#include <unistd.h>

void	print_bits(unsigned char octet);

int	main(void)
{
	unsigned char	t[] = {0, 1, 2, 5, 42, 127, 128, 170, 254, 255};

	for (unsigned i = 0; i < sizeof(t); i++)
	{
		print_bits(t[i]);
		write(1, "|\n", 2);
	}
	return (0);
}
