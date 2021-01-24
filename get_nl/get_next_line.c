/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/24 16:03:48 by ilya             ###   ########.fr       */
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
    char *buffer;
    int read_code;
    char *temp_storage;

    write(1, "d", 1);
    if (!line || BUFFER_SIZE <= 0)
        return (-1);
    read_code = 1;
    temp_storage = calloc(BUFFER_SIZE, sizeof(char));
    while (!ft_strrchr(temp_storage, 0) || read_code !=0)
    {

        if ((read_code = read(fd, buffer, BUFFER_SIZE)) < 0)
            return(-1);
        buffer[read_code] = 0;
        //printf("ch - %c\n", buffer[read_code - 1]);
        temp_storage = malloc(sizeof(char) * read_code);
        temp_storage = ft_strjoin(temp_storage, buffer);

        puts(temp_storage);
    }

    free(buffer);
    *line = append_str(temp_storage);
    // if (ft_strrchr(temp_storage, '\n'))
    //     return (1);
    // if (ft_strrchr(temp_storage, '\0') == read_code)
    //     return (-1);
    return (read_code);
}


