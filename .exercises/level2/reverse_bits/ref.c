unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	r;
	int				i;

	r = 0;
	i = 8;
	while (i--)
	{
		r = (r << 1) | (octet & 1);
		octet >>= 1;
	}
	return (r);
}
