#include <stddef.h>
size_t ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	for (; s[i]; i++)
	{
		size_t j = 0;
		while (accept[j] && accept[j] != s[i]) j++;
		if (!accept[j]) return (i);
	}
	return (i);
}
