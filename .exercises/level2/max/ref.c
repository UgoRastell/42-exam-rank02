int max(int *tab, unsigned int len)
{
	if (len == 0) return (0);
	int m = tab[0];
	for (unsigned int i = 1; i < len; i++)
		if (tab[i] > m) m = tab[i];
	return (m);
}
