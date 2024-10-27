
//#include "libft.h"

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}


void ft_putnbr_fd(int nb, int fd)
{
    long i;
    long n;

    i = 1;
    n = nb;
    if (n < 0)
    {
        ft_putchar_fd('-',fd);
        n *= -1;
    }
    while (i * 10 < n)
    {
        i *= 10;
    }
    while (i > 0)
    {
        ft_putchar_fd((n / i) + '0',fd);
        n %= i;
        i /= 10;
    }
}

int main()
{
    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n',1);
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n',1);
    ft_putnbr_fd(0, 1);
}