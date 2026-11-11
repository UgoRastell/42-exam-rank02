char *ft_strrev(char *str)
{
	int i = 0, j = 0;
	while (str[j]) j++;
	while (i < --j)
	{
		char t = str[i]; str[i++] = str[j]; str[j] = t;
	}
	return (str);
}
