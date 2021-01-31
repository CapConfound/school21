/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/31 22:30:08 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  get_line(char *str)
{
    size_t size;

    size = 0;
    while(str[size] && str[size] != '\n' && size < BUFFER_SIZE)
    {
        size++;
    }
    return (size);
}

char *ft_strinit(void)
{
    char *str;

    str = malloc(sizeof(char));
    *str = 0;
    return (str);
}

int     get_next_line(int fd, char **line) {
    char buffer[BUFFER_SIZE + 1];
    int read_code;
    char *temp_storage;
    char *slime;
    int i = 1;

    if (BUFFER_SIZE <= 0 || fd < 0)
        return (-1);
    if (!*line)
        *line = ft_strinit();
    if(temp_storage)
        temp_storage = ft_strinit();
    read_code = 1;
    while ((read_code = read(fd, buffer, BUFFER_SIZE)) >= 0)
    {
        buffer[read_code] = 0;
//        printf("ya v cikle:%d\n", i);
//        if(!(temp_storage = malloc(sizeof(char) * get_line(buffer))))
//            return (-1);
        if (read_code == 0)
            break;
        if((slime = ft_strrchr(buffer, '\n')))
        {
            puts("there is \\n down here");
            *slime = 0;

        }

        printf("read_code - %d\n", read_code);
        if (!temp_storage)
            temp_storage = strdup("\0");
        // printf("code - %d\n", get_line(buffer));

        temp_storage = ft_strjoin(temp_storage, buffer);
        printf("(ts - %s)\n", temp_storage);
    }
    *line = ft_strjoin(*line, temp_storage);
    //free(temp_storage);
    return (1);
}
/*
**Comment example norminette-ready
**free(temp_storage);
*/