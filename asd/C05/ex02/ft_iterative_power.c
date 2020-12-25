#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int ret;

	ret = 1;
	while (power)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}

int		main()
{
	int nb = 3;
	int power = 3;

	printf("%d\n", ft_iterative_power(nb, power));
}