
#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    char    *str;
    int len;

    str = ft_itoa(n);
    len = ft_strlen(str);
    write(fd, str, len);
}