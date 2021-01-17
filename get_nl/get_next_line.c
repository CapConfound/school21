/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/17 22:48:02 by ilya             ###   ########.fr       */
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
    i = 0;
    size_t code;

    puts(*line);
    
    while ((code = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[code] = 0;
        if (buffer[code - 1] == '\0')
            return (0);
        if (buffer[code - 1] == '\n')
            return (1);
        line = malloc(code);
        *line = ft_strjoin((const char *)*line, buffer);
        puts(*line);
        line++;
    }
    return (-1);
}


