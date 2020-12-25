#include <stdio.h>

int		ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return nb * ft_power(nb, power -1);
}

int		ft_is_prime(int nb)
{
	int it;

	it = 5;
	if (nb >= 2 && nb <= 3)
		return (1);
	if (nb < 2)
		return (0);
	if ((nb % 2) == 0 || (nb % 3) == 0)
		return (0);
	while (ft_power(it, 2) < nb)
	{
		if (nb % it == 0 || nb % (it + 2) == 0)
			return (0);
		it += 6;
	}
	return (1);
}

int		main()
{
	int nb = 5;
	printf("%d\n", ft_is_prime(nb));
}