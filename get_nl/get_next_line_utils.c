#include "get_next_line.h"

size_t    ft_strlen(const char *str)
{
    size_t chars;

    chars = 0;
    if(!str)
        return (0);
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
    free((char *)s1);
    return (res);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (0);
    if (size == 0)
        return (ft_strlen(src));
    --size;
    while (src[i] && i < size)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}

char	*ft_strdup(const char *str)
{
    char	*str1;
    int		lenght;

    lenght = ft_strlen(str);
    str1 = NULL;
    if ((!str) || (!(str1 = malloc(sizeof(char) * lenght + 1))))
        return (NULL);
    ft_strlcpy(str1, str, lenght + 1);
    return (str1);
}

char    *ft_strrchr(const char *str, int c)
{
    size_t            lenght;
    unsigned char    *s;

    if(!str)
        return (0);
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
void	*ft_bzero(void *s, size_t n)
{
    char			*sequence;
    unsigned int	i;

    sequence = (char *)s;
    i = 0;
    while (i < n)
        sequence[i++] = 0;
    return (sequence);
}

char	*ft_strchr(const char *str, int c)
{
    char	*p;

    p = (char*)str;
    if (*p == c)
        return (p);
    while (*p)
    {
        if (*p == c)
            return (p);
        p++;
        if (*p == c)
            return (p);
    }
    return (NULL);
}
