# ifndef GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <util.h>
#include <fcntl.h>


int		get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_get_remsize(char *arr, size_t buffsize);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_strrchr(const char *str, int c);

#endif