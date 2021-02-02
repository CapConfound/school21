/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/02/02 23:14:54 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strinit(void)
{
    char *str;

    str = malloc(sizeof(char));
    *str = 0;
    return (str);
}

char *handle_leftover(char *leftovers, char **line)
{
    char *nlpoint;

    nlpoint = NULL;
    if(leftovers)
    {
        nlpoint = ft_strchr(leftovers, '\n');
        if(nlpoint)
        {
            *nlpoint = 0;
            *line = ft_strdup(leftovers);
            ft_strcpy(leftovers, ++nlpoint);
        }
        else
        {
            if(*leftovers == 0)
                return (nlpoint);
            *line = ft_strdup(leftovers);
            free(leftovers);
        }
    }
    else
        *line = ft_strinit();
    return (nlpoint);
}

int     get_next_line(int fd, char **line) {
    char buffer[BUFFER_SIZE + 1];
    int read_code;
    char *temp_storage;
    char *nlpoint;
    static char *leftovers;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (-1);

    if(temp_storage)
        temp_storage = ft_strinit();
    nlpoint = handle_leftover(leftovers, line);
    while (!nlpoint && (read_code = read(fd, buffer, BUFFER_SIZE)))
    {
        buffer[read_code] = 0;
        if((nlpoint = ft_strchr(buffer, '\n')))
        {
            *nlpoint = 0;
            leftovers = ft_strdup(++nlpoint);
            //printf("leftovers-%s", leftovers);
        }
        if (!temp_storage)
            temp_storage = ft_strdup("\0");
        temp_storage = ft_strjoin(temp_storage, buffer);
    }
    *line = ft_strjoin(*line, temp_storage);
    free(temp_storage);
    return ((read_code || ft_strlen(leftovers) || ft_strlen(*line)) ? 1 : 0);
}
/*
**Comment example norminette-ready
**free(temp_storage);
*/