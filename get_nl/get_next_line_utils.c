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

