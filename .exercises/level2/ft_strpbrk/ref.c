#include <stddef.h>
char *ft_strpbrk(const char *s1, const char *s2)
{
	for (; *s1; s1++)
		for (int j = 0; s2[j]; j++)
			if (*s1 == s2[j]) return ((char *)s1);
	return (NULL);
}
