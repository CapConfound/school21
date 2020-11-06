/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:47:53 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/05 23:49:06 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define	LIBFT_H_

#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);

int		ft_strlen(char *str);

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);

int ft_toupper(int c);
int ft_tolower(int c);

char    *ft_strchr(const char *str, int c);
char    *ft_strrchr(const char *str, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src,  size_t size);
char    *ft_strnstr(const char *big, const char *little, size_t len);
// ft_atoi();
// ft_calloc();
// ft_strdup();

#endif
