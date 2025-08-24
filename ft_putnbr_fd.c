
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
    if (n == 0)
    {
        write(fd, "0", 1);
        return;
    }
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 0)
	{
        if (n >= 10)
		    ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		write(fd, &c, 1);
	}
}
