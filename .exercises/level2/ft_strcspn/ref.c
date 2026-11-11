#include <stddef.h>
size_t ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	for (; s[i]; i++)
		for (size_t j = 0; reject[j]; j++)
			if (s[i] == reject[j]) return (i);
	return (i);
}
