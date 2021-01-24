//
//  get_new_line_utils.c
//  getnl
//
//  Created by ilya on 09.01.2021.
//

#include "get_next_line.h"

size_t    ft_strlen(const char *str)
{
    size_t chars;

    chars = 0;
    while (str[chars] != '\0')
        chars++;
    return (chars);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *res;
    size_t    i1;
    size_t    i2;

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
    free(s1);
    return (res);
}

int    ft_strncmp(char *s1, char *s2, size_t n)
{
    size_t            ix;
    unsigned char    diff;
    unsigned char    c1;
    unsigned char    c2;

    ix = 0;
    while (((unsigned char)s1[ix] != '\0' ||
    (unsigned char)s2[ix] != '\0') && (ix < n))
    {
        c2 = (unsigned char)s2[ix];
        c1 = (unsigned char)s1[ix];
        diff = c2 - c1;
        if (c2 > c1)
            return (-diff);
        else if (c2 < c1)
            return (diff);
        ix++;
    }
    return (0);
}

// strlcat

size_t    ft_get_remsize(char *arr, size_t buffsize)
{
    char    *s;
    size_t    remsize;

    s = (char *)arr;
    remsize = buffsize;
    while (*s++ != '\0')
    {
        remsize--;
    }
    return (remsize);
}

size_t    ft_strlcat(char *dest, const char *src, size_t size)
{
    char    *s;
    size_t    pointer;
    int        i;
    size_t    res;

    s = (char *)src;
    if (ft_strlen(dest) >= size)
        return (size + ft_strlen(s));
    res = ft_strlen(s) + ft_strlen(dest);
    if (size == 0)
        return (res);
    i = -1;
    s = (char *)src;
    pointer = ft_get_remsize(dest, size);
    pointer = size - pointer;
    while (src[++i] != '\0' && pointer < size - 1)
        dest[pointer++] = s[i];
    dest[pointer] = '\0';
    return (res);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*sequence;
	unsigned int	ch;
	unsigned int	i;

	ch = c;
	sequence = s;
	i = 0;
	while (i < n)
	{
		*sequence++ = ch;
		i++;
	}
	return (s);
}

char	*ft_strrchr(const char *str, int c)
{
	size_t			lenght;
	unsigned char	*s;

	s = (unsigned char *)str;
	lenght = ft_strlen((const char *)s);
	while (lenght)
	{
		if (s[lenght] == (char)c)
			break ;
		lenght--;
	}
	if (s[lenght] == (char)c)
		return ((char *)&str[lenght]);
	return (NULL);
}