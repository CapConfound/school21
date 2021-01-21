/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/21 21:08:59 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


char *append_str(char *str, char *to_append)
{
    size_t size1;
    size_t size2;

    size1 = ft_strlen(str);
    size2 = ft_strlen(to_append);
    while (size2 != 0)
    {
        str = malloc(sizeof(char));
        *(str + size1) = *to_append++;
        size2--;
    }
    return (str);
}

int        get_next_line(int fd, char **line)
{
    size_t i;
    char buffer[BUFFER_SIZE + 1];
    size_t lenght;
    char *banana;
    i = 0;
    size_t code;

    
    while ((code = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[code] = 0;
        //printf("ch - %c\n", buffer[code - 1]);
        if (buffer[code - 1] == '\0')
            return (0);
        if (buffer[code - 1] == '\n')
            return (1);
        banana = malloc(sizeof(char) * code);
        banana = ft_strjoin(banana, buffer);
        
        puts(banana);
    }
    fd++;
    return (-1);
}


