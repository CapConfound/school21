/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/09 17:26:52 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 1

int        get_next_line(int fd, char **line)
{
    size_t i;
    char buffer[BUFFER_SIZE + 1];
    i = 0;
    
    while (read(fd, buffer, 1) != -1 && ft_strncmp(buffer, "\n", 1))
    {
        ft_strlcat((const char *)*line, buffer, 1);
        i++;
    }
    // while (check != -1 && buffer[ft_strlen(buffer) - 1] != '\n')
    //     read(fd, buffer, BUFFER_SIZE);
        
    // if (== -1)
    //     {
    //         puts("im outtahere");
    //         exit(1);
    //     }
    printf("%s\n", buffer);
    printf("\nline: %s\n", *line);
    return (1);
}


