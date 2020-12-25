#include <unistd.h>
#include <stdio.h>

int	ft_check_base(char *str)
{
	int it;
	int src;

	it = 0;
	src = 0;
	if (str[it] == '\0' || str[it + 1] == '\0')
		return (0);
	while (str[it])
	{
		if (str[it] < 32 || str[it] > 126)
			return (0);
		if (str[it] == '+' || str[it] == '-')
			return (0);
		while (str[src])
		{
			if (str[it] == str[src + 1])
				return (0);
			src++;
		}
		it++;
		src = it;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;
}

int		ft_putnbr_base(int nbr, char *base)//MIN INT FUCKS UP! & too many lines
{
	int size;
	int it;
	char output[100];//dynamic somehow?!

	size = 0;
	it = 0;
	if (ft_check_base(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = nbr * -1;
		}
		while (base[size])
			size++;
		while (nbr)
		{
			output[it] = (nbr % size) + 48;
			nbr = nbr / size;
			it++;
		}
		while (it >= 0)
		{
			if (output[it] > 57)
				output[it] += 7;
			ft_putchar(output[it]);
			it--;
		}
	}
}

int		main()
{
	int n = -79;

	char test[] = "+012";
	
	char dec[] = "0123456789";
	char bin[] = "01";
	char hex[] = "0123456789ABCDEF";
	char oct[] = "poneyvif";
	
	ft_putnbr_base(n, hex);
}