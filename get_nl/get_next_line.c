/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmelina <tmelina@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/26 19:23:05 by tmelina          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t  get_line(char *str)
{
    size_t size;

    size = 0;
    while(str && str[size] != '\n')
    {
        size++;
    }
    return (size);
}

char    *append(char *string) {
    int i;
    char *result;

    i = 0;
    if (!string)
        return (0);
    while (string[i] != '\0' && string[i] != '\n')
    {
        if (!(result = malloc(sizeof(char))))
        {
            free(result);
            return (0);
        }
        result[i] = string[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

int     get_next_line(int fd, char **line) {
    char *buffer;
    int read_code;
    char *temp_storage;

    if (!line || BUFFER_SIZE <= 0 || fd < 0 ||
    !(buffer = malloc((BUFFER_SIZE + 1) * sizeof(char))))
        return (-1);
    read_code = 1;
    while (!ft_strrchr(temp_storage, '\n') || read_code > 0)
    {
        
        if ((read_code = read(fd, buffer, BUFFER_SIZE)) < 0)
        {
            free(buffer);
            return (-1);
        }
        buffer[read_code] = 0;
        if(!(temp_storage = malloc(sizeof(char) * get_line(buffer))))
            return (-1);
        // printf("read_code - %d\n", read_code);
        // printf("ch - %c\n", buffer[read_code - 1]);
        temp_storage = ft_strjoin(temp_storage, buffer);
        puts(temp_storage);
    }
    free(buffer);
    *line = append(temp_storage);
    free(temp_storage);
    return (1);
}
