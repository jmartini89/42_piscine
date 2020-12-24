#include <stdio.h>

int		ft_is_prime(int nb)
{
	int it;
	int check;

	it = 0;
	while (check != nb)
	{
		it++;
		check = nb * nb;
		if (check > nb)
			return (1);
	}
	return (0);
}

int		main()
{
	int n = 1;
	printf("%d\n", ft_is_prime(n));
}