
#include "libft/libft.h"

void    vaft(char *str, ...)
{
    va_list arr;
    char *string;

    va_start(arr, str);

    string = va_arg(arr, char*);
    ft_putstr_fd(str, 1);
    ft_putstr_fd(string, 1);

    va_end(arr);
}

int main()
{
    vaft("string is: ", "jeeez");
}