#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t chars;

	chars = 0;
	while (str[chars] != '\0')
		chars++;
	return (chars);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i1;
	size_t	i2;

	if (!s1 || !s2)
		return (NULL);
	res = malloc((ft_strlen(s1) +
	ft_strlen(s2)) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	i1 = 0;
	i2 = 0;
	while (s1[i1])
	{
		res[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
		res[i1++] = s2[i2++];
	res[i1] = '\0';
	return (res);
}

