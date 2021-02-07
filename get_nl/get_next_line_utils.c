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

char    *ft_strjoin(char *s1, char *s2)
{
    char	*res;
    size_t	i1;
    size_t	i2;
    char	*dup;

    if (!s1 || !s2)
        return (NULL);
	dup = s1;
    res = malloc((ft_strlen(dup) +
                  ft_strlen(s2)) * sizeof(char) + 1);
    if (!res)
        return (NULL);
    i1 = 0;
    i2 = 0;
    while (dup[i1])
    {
        res[i1] = dup[i1];
        i1++;
    }
    while (s2[i2])
        res[i1++] = s2[i2++];
    res[i1] = '\0';
    if (dup)
    	free(dup);
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

size_t	ft_strcpy(char *dest, const char *src)
{
    size_t i;
    size_t len1;
    size_t len2;

    len1 = ft_strlen(dest);
    len2 = ft_strlen(src);
    i = 0;
    if ((!dest || !src) && (len1 >= len2))
        return (0);
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}
