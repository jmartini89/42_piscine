#include <unistd.h>

int nb;
char a;

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if(nb == -2147483648)//DAFARE
	{
		write -2147483648
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if(nb < 10)//send to write!
	{
		ft_putchar(nb + 48);
	}
	else if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	main(void)
{
	ft_putnbr(-2147483648);
}