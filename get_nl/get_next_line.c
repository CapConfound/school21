/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/02/03 20:07:27 by ilya             ###   ########.fr       */
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
    int i;

    i = 0;
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
            while (leftovers[i])
                leftovers[i++] = '\0';
            free(leftovers);
            return (0);
        }
    }
    else
        *line = ft_strinit();
    return (nlpoint);
}

int     get_next_line(int fd, char **line) {
    char *buffer;
    int read_code;
    char *nlpoint;
    static char *leftovers;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (-1);
    if (!(buffer = malloc((sizeof(char) * BUFFER_SIZE) + 1)))
        return (-1);
    if (*line)
        **line = 0;
    nlpoint = handle_leftover(leftovers, line);
    while (!nlpoint && (read_code = read(fd, buffer, BUFFER_SIZE)))
    {
        buffer[read_code] = 0;
        //flag = handle_leftover(leftovers, line);
        if((nlpoint = ft_strchr(buffer, '\n')))
        {
            *nlpoint = 0;
            leftovers = ft_strdup(++nlpoint);
            *line = ft_strjoin(*line, buffer);
            //free(buffer);
            *buffer = 0;
        }
        else
            *line = ft_strjoin(*line, buffer);
        if (!ft_strrchr(*line, 0))
            break ;
    }
    //*line = ft_strjoin(*line, temp_storage);
    //free(temp_storage);
    if (read_code <= 0)
        return (read_code);
    return ((read_code || ft_strlen(leftovers) || ft_strlen(*line)) ? 1 : 0);
}
/*
**Comment example norminette-ready
**free(temp_storage);
*/