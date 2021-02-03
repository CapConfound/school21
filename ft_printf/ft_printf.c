
#include "libft/libft.h"

int ft_printf(char *str, ...)
{
	size_t chars;
    size_t args;
    va_list ap;
    char *string_ar;
    char chr;
    va_start(ap, str);

    args = 0;
	chars = 0;
    string_ar = va_arg(ap, char*);
    chr = va_arg(ap, int);
    
	while (str[chars] != '\0')
    {
        
        if(str[chars] == '%' && str[chars + 1] != '%')
        {
            args++;
            if (str[chars + 1] == 's')
                //ft_putstr_fd(string_ar, 1);
            if (str[chars + 1] == 'c')
                ft_putchar_fd(chr, 1);
            
            chars++;
        }
        else
            ft_putchar_fd(str[chars], 1);
        chars++;
    }
    va_end(ap);
	return (args);
}

int main()
{
    int s1 = 2;
    char d1[] = "строка";
    ft_printf("Сколько аргументов: %d%%%d%%%d%d%%s\n", s1, s1, s1, s1, d1);
}