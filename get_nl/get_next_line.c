/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilya <ilya@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:17:08 by tmelina           #+#    #+#             */
/*   Updated: 2021/01/10 23:50:55 by ilya             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#define BUFFER_SIZE 3

int        geet_next_line(int fd, char **line)
{
    size_t i;
    char buffer[BUFFER_SIZE + 1];
    i = 0;
    
    while (read(fd, buffer, 1) != -1 && ft_strncmp(buffer, "\n", 1))
    {
        printf("%s\n", buffer);
        // *line = *buffer; // замена, а надо дописывать
        line = malloc (sizeof(char));
        //strlcat(*line, buffer, 1);
        printf("\nline: %s\n", *line);
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

int        get_next_line(int fd, char **line)
{
    size_t i;
    char *xz[255];
    char *tmp;
    char buffer[BUFFER_SIZE + 1];
    i = 0;
    size_t code;

    puts("");
    while ((code = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
//        printf("%s\n", buffer);
//        // *line = *buffer; // замена, а надо дописывать
//        *line = malloc(sizeof(char));
//        strlcat(*line, buffer, 2);
//        printf("line: %s\n", *line++);
        buffer[code] = 0;
        if (!xz[fd])
            ft_memset(&xz[fd], '-', 1);
        tmp = ft_strjoin(xz[fd], buffer);
        free(xz[fd]);
        xz[fd] = tmp;
        if (strchr(buffer, '\n'))
			break ;
        printf("tmp - %s|buf - %s\n", tmp, buffer);
    }
//    if (code == 0 && )
    // while (check != -1 && buffer[ft_strlen(buffer) - 1] != '\n')
    //     read(fd, buffer, BUFFER_SIZE);
        
    // if (== -1)
    //     {
    //         puts("im outtahere");
    //         exit(1);
    //     }
    for (int l = 0; l < 1; l++)
    {
        printf("%s", *line);
    }
    
    return (1);
}

