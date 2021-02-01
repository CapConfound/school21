/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/02/02 01:06:00 by ilya             ###   ########.fr       */
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
    char *slime;

    slime = NULL;
    if(leftovers)
    {
        if(slime == ft_strchr(leftovers, '\n'))
        {
            *slime = 0;
            *line = ft_strdup(leftovers);
            strcpy(leftovers, ++slime);
        }
        else
        {
            *line = ft_strdup(leftovers);
            free(leftovers);
        }
    }
    else
        *line = ft_strinit();
    return (slime);
}



int     get_next_line(int fd, char **line) {
    char buffer[BUFFER_SIZE + 1];
    int read_code;
    char *temp_storage;
    char *slime;
    static char *leftovers;
    int immaheadout = 0;
    int i = 0;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (-1);

    if(temp_storage)
        temp_storage = ft_strinit();
    read_code = 1;
    handle_leftover(leftovers, line);
    while (!immaheadout && (read_code = read(fd, buffer, BUFFER_SIZE)) >= 0)
    {
        buffer[read_code] = 0;
//        printf("ya v cikle:%d\n", ++ i);
//        if(!(temp_storage = malloc(sizeof(char) * get_line(buffer))))
//            return (-1);
        if (read_code == 0)
            break;
        if((slime = ft_strchr(buffer, '\n')))
        {
//            puts("there is \\n down here");
            *slime = 0;
            leftovers = ft_strdup(++slime);
            immaheadout = 1;
        }

//        printf("read_code - %d\n", read_code);
        if (!temp_storage)
            temp_storage = strdup("\0");
        // printf("code - %d\n", get_line(buffer));

        temp_storage = ft_strjoin(temp_storage, buffer);
//        printf("(ts - %s)\n", temp_storage);
    }
    *line = ft_strjoin(*line, temp_storage);
    free(temp_storage);
    return (1);
}
/*
**Comment example norminette-ready
**free(temp_storage);
*/