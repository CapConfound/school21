/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:47:53 by tmelina           #+#    #+#             */
/*   Updated: 2020/11/02 12:36:25 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H_
# define	LIBFT_H_

void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);

size_t	ft_strlcat(char *dest, const char *src,  size_t size);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
int		ft_strlen(char *str);

#endif
