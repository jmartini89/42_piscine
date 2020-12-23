#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return nb * ft_recursive_power(nb, power -1);
}

int		main()
{
	int nb = 0;
	int power = 0;

	printf("%d\n", ft_recursive_power(nb, power));
}